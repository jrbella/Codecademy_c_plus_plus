//https://github.com/jrbella/Codecademy_c_plus_plus.git

#include <iostream>

int main() {
  
  double height, weight, bmi;
  
  // Ask user for their height
  
  std::cout << "Type in your height (m): ";
  std::cin >> height;
  
  // Now ask the user for their weight and calculate BMI
  
   std::cout << "Type in your weight (w): ";
   std::cin >> weight;
   bmi = weight / (height * height);
   std::cout << "Your body mass index (BMI) " << bmi << ".\n";
   return 0;

}