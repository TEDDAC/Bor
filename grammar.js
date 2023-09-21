module.exports = grammar({
  name: 'BOR_PROGRAMMING_LANGAGE',

  rules: {
    program: $ => repeat(choice($._definition, $._expression)),

    _definition: $ => choice(
      $.function_definition,
    ),

    function_definition: $ => seq(
      'func',
      field('name', $.identifier),
      field('parameters', $.parameter_list),
      optional(field('type', $._type)),
      field('code', $.block)
    ),

    parameter_list: $ => seq(
      '(',
      optional(seq($.variable_declaration, optional(repeat(seq(',', $.variable_declaration))))),
      ')'
    ),

    _type: $ => choice(
      $.primitive_type
    ),

    primitive_type: $ => choice(
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

    if_statement: $ => seq(
      'if',
      field('condition', $._parenthesis_expression),
      field('code', $.block)
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._parenthesis_expression),
      field('code', $.block)
    ),

    for_statement: $ => seq(
      'for',
      '(',
      field('initialization', $._expression),
      ';',
      field('condition', $._expression),
      ';',
      field('step', $._expression),
      ')',
      field('code', $.block)
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.bool,
      $.unary_expression,
      $.binary_expression,
      $._parenthesis_expression,
      $.variable_declaration,
      $.variable_definition,
      $.return_statement,
      $.if_statement,
      $.while_statement,
      $.for_statement,
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

    unary_expression: $ => prec(4, choice(
      seq(field('operator','-'), field('right',$._expression)),
      seq(field('operator','!'), field('right',$.identifier)),
      seq(field('left',$.identifier), field('operator','++')),
      seq(field('left',$.identifier), field('operator','--'))
    )),
  
    binary_expression: $ => choice(
      prec.left(3, seq(field('left',$._expression), field('operator','*'), field('right',$._expression))),
      prec.left(3, seq(field('left',$._expression), field('operator','/'), field('right',$._expression))),
      prec.left(2, seq(field('left',$._expression), field('operator','+'), field('right',$._expression))),
      prec.left(2, seq(field('left',$._expression), field('operator','-'), field('right',$._expression))),
      choice(
        prec.left(1, seq(field('left',$._expression), field('operator','=='), field('right',$._expression))),
        prec.left(1, seq(field('left',$._expression), field('operator','>='), field('right',$._expression))),
        prec.left(1, seq(field('left',$._expression), field('operator','>'), field('right',$._expression))),
        prec.left(1, seq(field('left',$._expression), field('operator','<'), field('right',$._expression))),
        prec.left(1, seq(field('left',$._expression), field('operator','<='), field('right',$._expression))),
        prec.left(1, seq(field('left',$._expression), field('operator','!='), field('right',$._expression))),
        prec.left(1, seq(field('left',$.identifier), field('operator','+='), field('right',$._expression))),
        prec.left(1, seq(field('left',$.identifier), field('operator','-='), field('right',$._expression)))
      )
    ),

    _parenthesis_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    identifier: $ => /[a-zA-Z0-9]*[a-zA-Z]+[a-zA-Z0-9]*/,

    number: $ => /\d+(.\d+)?/,

    string: $ => /".*"/,

    bool: $ => choice('true', 'false')
  }
});
