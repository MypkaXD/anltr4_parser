grammar mygrammar;

INT: [0-9]+;

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
	| INT # INTEGER
;
row: expr SEP # expr_sep
;
prog: row EOF? # oneLineProg
	| prog row EOF? # prog_row
;