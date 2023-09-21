module.exports = grammar({
  name: 'BORING_PROGRAMMING_LANGAGE',

  rules: {
    program: $ => repeat(choice($._definition, $._expression)),

    _definition: $ => choice(
      $.function_definition,
      // TODO: other kinds of definitions
    ),

    function_definition: $ => seq(
      'func',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      field('type', $._type),
      field('code', $.block)
    ),

    parameter_list: $ => seq(
      '(',
       // TODO: parameters
      ')'
    ),

    _type: $ => choice(
      $.primitive_type
    ),

    primitive_type: $ => choice(
      'void',
      'bool',
      'number',
      'string',
    ),

    block: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.unary_expression,
      $.binary_expression,
      $.variable_declaration,
      $.variable_definition,
      $.return_statement,
    ),

    variable_declaration: $ => seq(
      field('type', $.primitive_type),
      field('name', $.identifier)
    ),

    variable_definition: $ => seq(
      choice(field('name', $.identifier), $.variable_declaration),
      '=',
      field('value', $._expression)
    ),

    unary_expression: $ => prec(3, choice(
      seq(field('operator','-'), field('right',$._expression)),
      seq(field('operator','!'), field('right',$.identifier)),
      // ...
    )),
  
    binary_expression: $ => choice(
      prec.left(2, seq(field('left',$._expression), field('operator','*'), field('right',$._expression))),
      prec.left(2, seq(field('left',$._expression), field('operator','/'), field('right',$._expression))),
      prec.left(1, seq(field('left',$._expression), field('operator','+'), field('right',$._expression))),
      prec.left(1, seq(field('left',$._expression), field('operator','-'), field('right',$._expression))),
    ),

    identifier: $ => /[a-z]+/,

    number: $ => /\d+/,

    string: $ => /".*"/,
  }
});
