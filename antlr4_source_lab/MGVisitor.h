#pragma once

#include "mygrammarBaseVisitor.h"

class MGVisitor : public mygrammarBaseVisitor {

    std::any visitLexprR(mygrammarParser::LexprRContext* context) {
        return visit(context->expr());
    }

    std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext* context) {
        int first = std::any_cast<int>(visit(context->expr(0)));
        int second = std::any_cast<int>(visit(context->expr(1)));
        antlr4::Token* startToken = context->start;
        antlr4::Token* stopToken = context->stop;
        antlr4::misc::Interval interval(startToken->getTokenIndex(), stopToken->getTokenIndex());
        std::string symbol = context->start->getInputStream()->getText(interval); // Получите символ
        std::cout << symbol << std::endl;
        if (symbol == "-")
            return first - second;
        return first + second;
    }

    std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext* context) {
        int first = std::any_cast<int>(visit(context->expr(0)));
        int second = std::any_cast<int>(visit(context->expr(1)));
        antlr4::Token* startToken = context->start;
        antlr4::Token* stopToken = context->stop;
        antlr4::misc::Interval interval(startToken->getTokenIndex(), stopToken->getTokenIndex());
        std::string symbol = context->start->getInputStream()->getText(interval); // Получите символ
        if (symbol == "/")
            return first / second;
        return first * second;
    }
    std::any visitINTEGER(mygrammarParser::INTEGERContext* context) {
        return context->INT();
    }
    std::any visitExpr_sep(mygrammarParser::Expr_sepContext* context) {
        return context->expr();
    }
    std::any visitProg_row(mygrammarParser::Prog_rowContext* context) {
        int val = std::any_cast<int>(visit(context->row()));
        std::cout << val << std::endl;
        data.push_back(val);
        return val;
    }
    std::any visitOneLineProg(mygrammarParser::OneLineProgContext* context) {
        int val = std::any_cast<int>(visit(context->row()));
        std::cout << val << std::endl;
        data.push_back(val);
        return val;
    }
public:
    std::vector <double> data;
};