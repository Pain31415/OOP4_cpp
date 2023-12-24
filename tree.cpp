#include "tree.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void setRandomColor() {
    int color = rand() % 7 + 31;
    std::cout << "\033[" << color << "m";
}

void resetConsoleColor() {
    std::cout << "\033[0m";
}

void drawTree(int height) {
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i - 1; ++j)
            std::cout << ' ';

        for (int k = 0; k < 2 * i + 1; ++k) {
            setRandomColor();
            std::cout << '*';
            resetConsoleColor();
        }

        std::cout << std::endl;
    }

    // Draw tree trunk
    for (int i = 0; i < height / 3; ++i) {
        for (int j = 0; j < height - 1; ++j)
            std::cout << ' ';

        std::cout << '|' << std::endl;
    }
}

void drawSnowman() {
    std::cout << "\n*** Snowman ***\n";
    std::cout << "   .--.\n";
    std::cout << "  |o_o |\n";
    std::cout << "  |:_/ |\n";
    std::cout << " //   \\ \\\n";
    std::cout << "(       )\n";
    std::cout << "/'-'   \\\n";


}