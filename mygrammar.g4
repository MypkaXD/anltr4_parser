grammar mygrammar;

DOUBLE: [0-9]+ '.' [0-9]+
	| [0-9]+
;

NAME: [A-z]+;
EQ: '=';
PRINT: '<<';

SUB: '-';
ADD: '+';
DIV: '/';
MUL: '*';

SEP: ';';

LBR: '(';
RBR: ')';

WS: [ \t\r\n]->skip;

expr: expr (MUL|DIV) expr # exprMULexpr
	| expr (ADD|SUB) expr # exprADDexpr
	| LBR expr RBR # LexprR
	| DOUBLE # NUMBER
	| NAME # NAMEING
;
row: NAME EQ expr SEP# name_eq_expr_sep
	| PRINT expr SEP #print_expr_sep
;
prog: row EOF? # oneLineProg
	| row prog EOF? # prog_row
;