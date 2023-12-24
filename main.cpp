#include <iostream>
#include "tree.h"
#include "greeting.h"
#include "menu.h"

int getChoice() {
    int choice;
    std::cout << "Enter your choice (0 to exit): ";
    std::cin >> choice;

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter a valid number: ";
        std::cin >> choice;
    }

    return choice;
}

int main() {
    showGreeting();

    int choice;

    do {
        showMenu();
        choice = getChoice();

        switch (choice) {
        case 1:
            int treeHeight;
            std::cout << "Enter the height of the tree: ";
            std::cin >> treeHeight;
            drawTree(treeHeight);
            break;
        case 2:
            showCandies();
            break;
        case 3:
            showDecorations();
            break;
        case 4:
            drawSnowman();
            break;
        case 5:
            showWishList();
            break;
        case 6:
            countdownToNewYear();
            break;
        case 0:
            std::cout << "Exiting program. Goodbye!" << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
            break;
        }

    } while (choice != 0);

    return 0;
}