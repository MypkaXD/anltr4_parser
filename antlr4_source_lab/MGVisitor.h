#pragma once

#include "mygrammarBaseVisitor.h"

class MGVisitor : public mygrammarBaseVisitor {
    std::any visitLexprR(mygrammarParser::LexprRContext* context) {
        return visit(context->expr());
    }

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
        int first = std::any_cast<int>(visit(context->expr(0)));
        int second = std::any_cast<int>(visit(context->expr(1)));
        std::cout << "!!!" << std::endl;
        return first + second;
    }

    //std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) = 0
    //std::any visitINTEGER(mygrammarParser::INTEGERContext* context) = 0
    //std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) = 0
    //std::any visitProg_row(mygrammarParser::Prog_rowContext* context) = 0
    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
        int val = std::any_cast<int>(visit(context->row()));
    }
};