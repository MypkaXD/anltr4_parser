
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "mygrammarVisitor.h"


/**
 * This class provides an empty implementation of mygrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  mygrammarBaseVisitor : public mygrammarVisitor {
public:

  virtual std::any visitNUMBER(mygrammarParser::NUMBERContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLexprR(mygrammarParser::LexprRContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNAMEING(mygrammarParser::NAMEINGContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprADDexpr(mygrammarParser::ExprADDexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprMULexpr(mygrammarParser::ExprMULexprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitName_eq_expr_sep(mygrammarParser::Name_eq_expr_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_expr_sep(mygrammarParser::Print_expr_sepContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneLineProg(mygrammarParser::OneLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProg_row(mygrammarParser::Prog_rowContext *ctx) override {
    return visitChildren(ctx);
  }


};

