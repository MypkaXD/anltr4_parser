
// Generated from mygrammar.g4 by ANTLR 4.13.0


#include "mygrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MygrammarLexerStaticData final {
  MygrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MygrammarLexerStaticData(const MygrammarLexerStaticData&) = delete;
  MygrammarLexerStaticData(MygrammarLexerStaticData&&) = delete;
  MygrammarLexerStaticData& operator=(const MygrammarLexerStaticData&) = delete;
  MygrammarLexerStaticData& operator=(MygrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MygrammarLexerStaticData *mygrammarlexerLexerStaticData = nullptr;

void mygrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MygrammarLexerStaticData>(
    std::vector<std::string>{
      "DOUBLE", "NAME", "EQ", "PRINT", "SUB", "ADD", "DIV", "MUL", "SEP", 
      "LBR", "RBR", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "'='", "'<<'", "'-'", "'+'", "'/'", "'*'", "';'", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "DOUBLE", "NAME", "EQ", "PRINT", "SUB", "ADD", "DIV", "MUL", "SEP", 
      "LBR", "RBR", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,12,71,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,4,0,27,8,0,11,0,12,
  	0,28,1,0,1,0,4,0,33,8,0,11,0,12,0,34,1,0,4,0,38,8,0,11,0,12,0,39,3,0,
  	42,8,0,1,1,4,1,45,8,1,11,1,12,1,46,1,2,1,2,1,3,1,3,1,3,1,4,1,4,1,5,1,
  	5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,11,1,11,0,0,12,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,1,0,3,1,0,48,
  	57,1,0,65,122,3,0,9,10,13,13,32,32,75,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,
  	0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,
  	17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,1,41,1,0,0,0,3,44,1,
  	0,0,0,5,48,1,0,0,0,7,50,1,0,0,0,9,53,1,0,0,0,11,55,1,0,0,0,13,57,1,0,
  	0,0,15,59,1,0,0,0,17,61,1,0,0,0,19,63,1,0,0,0,21,65,1,0,0,0,23,67,1,0,
  	0,0,25,27,7,0,0,0,26,25,1,0,0,0,27,28,1,0,0,0,28,26,1,0,0,0,28,29,1,0,
  	0,0,29,30,1,0,0,0,30,32,5,46,0,0,31,33,7,0,0,0,32,31,1,0,0,0,33,34,1,
  	0,0,0,34,32,1,0,0,0,34,35,1,0,0,0,35,42,1,0,0,0,36,38,7,0,0,0,37,36,1,
  	0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,42,1,0,0,0,41,26,1,
  	0,0,0,41,37,1,0,0,0,42,2,1,0,0,0,43,45,7,1,0,0,44,43,1,0,0,0,45,46,1,
  	0,0,0,46,44,1,0,0,0,46,47,1,0,0,0,47,4,1,0,0,0,48,49,5,61,0,0,49,6,1,
  	0,0,0,50,51,5,60,0,0,51,52,5,60,0,0,52,8,1,0,0,0,53,54,5,45,0,0,54,10,
  	1,0,0,0,55,56,5,43,0,0,56,12,1,0,0,0,57,58,5,47,0,0,58,14,1,0,0,0,59,
  	60,5,42,0,0,60,16,1,0,0,0,61,62,5,59,0,0,62,18,1,0,0,0,63,64,5,40,0,0,
  	64,20,1,0,0,0,65,66,5,41,0,0,66,22,1,0,0,0,67,68,7,2,0,0,68,69,1,0,0,
  	0,69,70,6,11,0,0,70,24,1,0,0,0,6,0,28,34,39,41,46,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarlexerLexerStaticData = staticData.release();
}

}

mygrammarLexer::mygrammarLexer(CharStream *input) : Lexer(input) {
  mygrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mygrammarlexerLexerStaticData->atn, mygrammarlexerLexerStaticData->decisionToDFA, mygrammarlexerLexerStaticData->sharedContextCache);
}

mygrammarLexer::~mygrammarLexer() {
  delete _interpreter;
}

std::string mygrammarLexer::getGrammarFileName() const {
  return "mygrammar.g4";
}

const std::vector<std::string>& mygrammarLexer::getRuleNames() const {
  return mygrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& mygrammarLexer::getChannelNames() const {
  return mygrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& mygrammarLexer::getModeNames() const {
  return mygrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& mygrammarLexer::getVocabulary() const {
  return mygrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView mygrammarLexer::getSerializedATN() const {
  return mygrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& mygrammarLexer::getATN() const {
  return *mygrammarlexerLexerStaticData->atn;
}




void mygrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mygrammarlexerLexerOnceFlag, mygrammarlexerLexerInitialize);
#endif
}
