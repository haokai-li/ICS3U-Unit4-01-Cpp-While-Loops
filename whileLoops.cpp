// Copyright (c) 2021 haokai All rights reserved
//
// Created by: Haokai
// Created on: Sept 2021
// This Program calculate sum with while loops

#include <iostream>
#include <string>

int main() {
    // This Program calculate sum with while loops
    int loopNumber = 0;
    int answerNumber = 0;

    std::string userString;
    int userNumber;

    // input
    std::cout << "Please enter an positive integer: ";
    std::cin >> userString;
    std::cout << "" << std::endl;

    // process
    try {
        userNumber = std::stoi(userString);
        while (loopNumber < userNumber) {
            loopNumber = loopNumber + 1;
            answerNumber = answerNumber + loopNumber;
        }
        // output
        std::cout << "The sum of all positive number from 1 to "
        << userNumber << " is " << answerNumber << std::endl;
    } catch (std::invalid_argument) {
        // output
        std::cout << userString << " is not a valid input." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
