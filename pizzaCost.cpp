// Copyright (c) 2025 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: March 4, 2025
// Given user input, the cost of pizza is calculated

#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    // First I determine my constants

    const float HST = 0.13;
    const float RENTAL_COST = 2.25;
    const float LABOUR_COST = 2.00;
    const float INGRED_COST = 1.50;

    // Then declare my variables

    float diameterOfPizza, subtotal, tax;

    // The user then gives me the diameter of the pizza

    std::cout << "Enter the diameter of your pizza! (in): \n";
    std::cin >> diameterOfPizza;

    // Calculate subtotal and tax

    subtotal = ((diameterOfPizza*INGRED_COST)+RENTAL_COST+LABOUR_COST);
    tax = (subtotal * HST);

    // Code then Calculates & displays total cost of pizza

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total is $ " << (subtotal + tax) << "\n";
}
