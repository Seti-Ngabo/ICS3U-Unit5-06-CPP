// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Seti Ngabo
// Created on: Oct 2021
// This program rounds off to the nearest number
//   with user input


#include <iostream>
#include <string>
#include <cmath>

void roundOff(float &userInteger, int &secUserInteger) {
    // This Program rounds off number
    float firstSum;
    int secondSum;

    // process
    firstSum = userInteger * pow(10, secUserInteger) + 0.5;
    secondSum = firstSum;
    userInteger = secondSum / pow(10, secUserInteger);
}

main() {
    // this function accepts inputs
    std::string userString;
    float userInteger;
    std::string secUserString;
    int secUserInteger;

    // input
    std::cout << "Enter the number you want to round off: ";
    std::cin >> userString;
    std::cout << "Enter how many decimal places you want to round by: ";
    std::cin >> secUserString;
    std::cout << "" << std::endl;

    try {
        userInteger = std::stof(userString);
        secUserInteger = std::stoi(secUserString);

        // call functions
        roundOff(userInteger, secUserInteger);

        // output
        std::cout << "The rounded number is " << userInteger << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, try again." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
