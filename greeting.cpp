#include "greeting.h"
#include "menu.h"

void printColoredChar(char c) {
    setRandomColor();
    std::cout << c;
    resetConsoleColor();
}

void showGreeting() {
    printColoredChar('W');
    printColoredChar('e');
    printColoredChar('l');
    printColoredChar('c');
    printColoredChar('o');
    printColoredChar('m');
    printColoredChar('e');
    printColoredChar(' ');
    printColoredChar('t');
    printColoredChar('o');
    printColoredChar(' ');
    printColoredChar('t');
    printColoredChar('h');
    printColoredChar('e');
    printColoredChar(' ');
    printColoredChar('N');
    printColoredChar('e');
    printColoredChar('w');
    printColoredChar(' ');
    printColoredChar('Y');
    printColoredChar('e');
    printColoredChar('a');
    printColoredChar('r');
    printColoredChar('!');
    std::cout << std::endl;
}