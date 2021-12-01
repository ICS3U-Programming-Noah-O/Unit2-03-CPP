// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Nov. 25, 2021
// This program calculates the area and circumference of a
// circle with a radius that is provided by user inputs.
#include <iostream>
#include <cmath>

// declare constants
float TAU = M_PI * 2;

// declare variables
float radius, area, circumference;


int main() {
  // get input from user
  std::string units, userAnswer;
  std::cout << "Time to calculate the area and circumference ";
  std::cout << "of your own circle! \n";
  std::cout << "Enter the radius: ";
  std::cin >> radius;
  std::cout << "Enter the units: ";
  std::cin >> units;

  // calculate area and circumference
  area = ((TAU/2) * (pow(radius, 2)));
  circumference = radius * (TAU);

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area << units <<"^2.\n";
  std::cout << "circumference = " << circumference << units <<".\n";


  // Ask if user would like to calculate again
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;

  if (userAnswer == "Y" || "y") {
      main();
  } else { }
}
