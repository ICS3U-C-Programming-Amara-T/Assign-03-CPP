// Copyright (c) 2025 Amara Tie All rights reserved.
//
// Created by: Amara Tie
// Date: April 1, 2025
// This is a program that finds out what quadrant each coordinate lies

#include <iostream>
#include <string>

int main() {
    // Define variables
    std::string xAsString;
    std::string yAsString;
    int xAsNumber;
    int yAsNumber;

    // Greeting
    std::cout << "Hello! Lets find the quadrant of coordinates!";
    std::cout << "\n";

    // Ask user for coordinate
    std::cout << "Enter the x coordinate: ";
    std::cin >> xAsString;
    std::cout << "Enter the y coordinate: ";
    std::cin >> yAsString;

    try {
        xAsNumber = std::stoi(xAsString);
        yAsNumber = std::stoi(yAsString);

        if (xAsNumber > 0 && yAsNumber > 0) {
            std::cout << "The coordinates: " << xAsNumber << "\n " << yAsNumber << " are in quadrant 1.\n";
        } else if (xAsNumber < 0 && yAsNumber > 0) {
            std::cout << "The coordinates: " << xAsNumber << "\n"
                      << yAsNumber << " are in quadrant 2.\n";
        } else if (xAsNumber < 0 && yAsNumber < 0) {
            std::cout << "The coordinates: " << xAsNumber << "\n " << yAsNumber << " are in quadrant 3.\n";
        } else if (xAsNumber > 0 && yAsNumber < 0) {
            std::cout << "The coordinates: " << xAsNumber << "\n"
                      << yAsNumber << " are in quadrant 4.\n";
        } else {
            std::cout << "The point doesn't exist";
        }
    } catch (std::invalid_argument) {
        std::cout << "That was not a number.";
    }

    std::cout << "Thanks for playing!" << std::endl;
}
