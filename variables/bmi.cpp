#include <iostream>

int main()
{

  double height, weight, bmi;

  // Ask user for their height

  std::cout << "Type in your height (m): ";
  std::cin >> height;

  // Now ask the user for their weight and calculate BMI
  std::cout << "Type in your weight: ";
  std::cin >> weight;

  bmi = (height * height) / weight;
  std::cout << "Your body mass index is " << bmi << ".\n";

  return 0;
}