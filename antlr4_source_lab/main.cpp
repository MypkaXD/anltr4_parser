#include <iostream>

#include "mygrammarBaseVisitor.h"
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarVisitor.h"
#include "mygrammarBaseVisitor.h"
#include "MGVisitor.h"

int main() {
	std::string exp = "2+3;";
	std::stringstream stream(exp);
	antlr4::ANTLRInputStream input(stream);
	mygrammarLexer lexer(&input);
	antlr4::CommonTokenStream token(&lexer);
	mygrammarParser parser(&token);
	MGVisitor mgv;
	mgv.visit(parser.expr());
	return 0;
}