// Copyright (c) Year Tony G All rights reserved.
// Created By: Tony G
// Date: 2025-03-18

// Asks for user input and tells user if number is correct or not

#include <iostream>

int main() {
    std::cout << "Greetings! Please input a number" << std::endl;

    double number;
    std::cout << "Please enter a number: ";
    std::cin >> number;

    if (number == 5) {
        std::cout << "Congratulations! Correct!" << std::endl;
    } else {
        std::cout << "Incorrect, try again :(" << std::endl;
    }
}
