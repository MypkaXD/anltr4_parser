#include <iostream>

#include "mygrammarBaseVisitor.h"
#include "mygrammarLexer.h"
#include "mygrammarParser.h"
#include "mygrammarVisitor.h"
#include "mygrammarBaseVisitor.h"
#include "MGVisitor.h"

int main() {
    setlocale(LC_ALL, "rus");

    std::string exp = "a=5;b=2+a*a;<<b;";
    std::stringstream stream(exp);

    std::cout << "Создание входного потока с вашим выражением" << std::endl;
    antlr4::ANTLRInputStream input(stream);

    std::cout << "Создание лексера" << std::endl;
    mygrammarLexer lexer(&input);

    std::cout << "Создание потока токенов" << std::endl;
    antlr4::CommonTokenStream tokens(&lexer);

    std::cout << "Создание парсера" << std::endl;
    mygrammarParser parser(&tokens);

    std::cout << "Создание посетителя" << std::endl;
    MGVisitor visitor;

    std::cout << "Обход дерева" << std::endl;
    visitor.visit(parser.prog());
    std::cout << "Обход дерева закнчен" << std::endl;

    return 0;
}