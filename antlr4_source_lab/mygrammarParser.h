
// Generated from mygrammar.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  mygrammarParser : public antlr4::Parser {
public:
  enum {
    DOUBLE = 1, NAME = 2, EQ = 3, PRINT = 4, SUB = 5, ADD = 6, DIV = 7, 
    MUL = 8, SEP = 9, LBR = 10, RBR = 11, WS = 12
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

  class  NUMBERContext : public ExprContext {
  public:
    NUMBERContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *DOUBLE();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  LexprRContext : public ExprContext {
  public:
    LexprRContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *LBR();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RBR();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  NAMEINGContext : public ExprContext {
  public:
    NAMEINGContext(ExprContext *ctx);

    antlr4::tree::TerminalNode *NAME();

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

  class  Print_expr_sepContext : public RowContext {
  public:
    Print_expr_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *PRINT();
    ExprContext *expr();
    antlr4::tree::TerminalNode *SEP();

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  Name_eq_expr_sepContext : public RowContext {
  public:
    Name_eq_expr_sepContext(RowContext *ctx);

    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *EQ();
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

    RowContext *row();
    ProgContext *prog();
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


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

