// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program rounds off to the nearest firstSum
//   with user input

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

void roundOff(float &firstSum, int decimal) {
    // This Program rounds off firstSum

    // process
    firstSum = firstSum * pow(10, decimal) + 0.5;
    firstSum = static_cast<int>(firstSum);
    firstSum = firstSum / pow(10, decimal);
}

int main() {
    // this function accepts inputs

    float userfirstSum;
    int decimalInt;
    std::string userInput;
    std::string decimalPoints;

    try {
        // input
        std::cout << "Enter the number to round off: ";
        std::cin >> userInput;
        userfirstSum = std::stof(userInput);
        std::cout << "How many decimal places do you want to round off: ";
        std::cin >> decimalPoints;
        decimalInt = std::stoi(decimalPoints);

        roundOff(userfirstSum, decimalInt);

        // output
        std::cout << "\nThe rounded number is " << userfirstSum << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid input, try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
