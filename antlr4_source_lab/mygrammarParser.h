
// Generated from mygrammar.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  mygrammarParser : public antlr4::Parser {
public:
  enum {
    INT = 1, SUB = 2, ADD = 3, DIV = 4, MUL = 5, SEP = 6, LBR = 7, RBR = 8, 
    WS = 9
  };

  enum {
    RuleExpr = 0, RuleRow = 1, RuleProg = 2
  };

  explicit mygrammarParser(antlr4::TokenStream *input);

  mygrammarParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~mygrammarParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ExprContext;
  class RowContext;
  class ProgContext; 

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() = default;
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  LexprRContext : public ExprContext {
  public:
    LexprRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprADDexprContext : public ExprContext {
  public:
    ExprADDexprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ExprMULexprContext : public ExprContext {
  public:
    ExprMULexprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  INTEGERContext : public ExprContext {
  public:
    INTEGERContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *INT();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  RowContext : public antlr4::ParserRuleContext {
  public:
    RowContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    RowContext() = default;
    void copyFrom(RowContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Expr_sepContext : public RowContext {
  public:
    Expr_sepContext(RowContext *ctx);

    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  RowContext* row();

  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ProgContext() = default;
    void copyFrom(ProgContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  Prog_rowContext : public ProgContext {
  public:
    Prog_rowContext(ProgContext *ctx);

    ProgContext *prog();
    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  OneLineProgContext : public ProgContext {
  public:
    OneLineProgContext(ProgContext *ctx);

    RowContext *row();
    antlr4::tree::TerminalNode *EOF();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();
  ProgContext* prog(int precedence);

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);
  bool progSempred(ProgContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

