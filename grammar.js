module.exports = grammar({
	name: "scene",
	rules: {
		object: ($) =>
			seq(
				field("name", $.identifier),
				"[",
				sep(",", choice($.scriptblock, $.componentblock, $.children)),
				"]",
			),
		script: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
		component: ($) =>
			seq(
				field("name", $.identifier),
				"{",
				field("data", $.base64data),
				"}",
			),
		base64data: ($) => /[a-zA-Z0-9\+\/\=]*/,
		scriptblock: ($) => seq("scripts", "[", sep(",", $.script), "]"),
		componentblock: ($) =>
			seq("components", "[", sep(",", $.component), "]"),
		children: ($) => seq("children", "[", sep(",", $.object), "]"),
		identifier: ($) => /[a-zA-Z0-9_$]+/,
		hexcode: ($) => /#[0-9A-F]+/i,
	},
});

function sep(separator, rule) {
	return optional(
		seq(rule, repeat(seq(separator, rule)), optional(separator)),
	);
}
