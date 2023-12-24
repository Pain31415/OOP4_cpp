#include "menu.h"
#include <iostream>
#include "greeting.h"
#include <ctime>
#include <chrono>
#include <iomanip>
#include <thread>

void showMenu() {
    std::cout << "\n*** Menu ***\n";
    std::cout << "1. Draw a tree\n";
    std::cout << "2. Show candies\n";
    std::cout << "3. Show decorations\n";
    std::cout << "4. Draw a snowman\n";
    std::cout << "0. Exit\n";
}

void showCandies() {
    std::cout << "\n*** Candies ***\n";
    std::cout << "1. Chocolate truffles\n";
    std::cout << "2. Peppermint sticks\n";
    std::cout << "3. Gummy bears\n";
    std::cout << "4. Caramel chews\n";
    std::cout << "5. Jellybeans\n";
}

void showDecorations() {
    std::cout << "\n*** Decorations ***\n";
    std::cout << "1. Glittering ornaments\n";
    std::cout << "2. Tinsel garlands\n";
    std::cout << "3. LED fairy lights\n";
    std::cout << "4. Handmade paper snowflakes\n";
    std::cout << "5. Miniature reindeer figurines\n";
}

void showSnowmen() {
    std::cout << "\n*** Snowmen ***\n";
    std::cout << "1. Small snowman figurine\n";
    std::cout << "2. Snowman-shaped candles\n";
    std::cout << "3. Snowman-themed plush toys\n";
    std::cout << "4. Frosty the Snowman DVD\n";
    std::cout << "5. Snowman-building kit\n";
}
void showWishList() {
    std::cout << "\n*** Wish List ***\n";
    std::cout << "1. Happiness and joy\n";
    std::cout << "2. Peace on Earth\n";
    std::cout << "3. Love and warmth\n";
    std::cout << "4. Good health\n";
    std::cout << "5. Fun and laughter\n";
}
void countdownToNewYear() {
    // Отримання часу на момент запуску таймера
    auto start = std::chrono::steady_clock::now();

    // Отримання поточного часу в секундах
    auto currentTime = [] {
        return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now().time_since_epoch()).count();
        };

    // Отримання часу, коли наступить Новий рік (1 січня о 00:00:00)
    auto newYearTime = currentTime() + (1 * 24 * 60 * 60);  // 1 день * 24 години * 60 хвилин * 60 секунд

    // Оновлення лічильника кожну секунду
    while (currentTime() < newYearTime) {
        auto remainingTime = newYearTime - currentTime();
        auto hours = remainingTime / 3600;
        auto minutes = (remainingTime % 3600) / 60;
        auto seconds = remainingTime % 60;

        std::cout << "Time remaining: " << std::setfill('0') << std::setw(2) << hours << ":"
            << std::setfill('0') << std::setw(2) << minutes << ":"
            << std::setfill('0') << std::setw(2) << seconds << "\r" << std::flush;

        // Затримка на 1 секунду
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\nHappy New Year!\n";
}