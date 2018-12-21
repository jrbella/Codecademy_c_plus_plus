#include <iostream>
using namespace std;

int main() 
{
  string dog_name;
  //dog age iput here
  int dog_age = 0;
  //the first two years of a dog's life is ~ to 21 human years.
  int early_years = 21;
  //Each following year counts as 4 human years
  int later_years = (dog_age - 2) * 4;
  int human_years = early_years + later_years;
  
  cout << "Enter your dogs name \n";
  cin >> dog_age;
  cout << "Enter your dogs age \n";
  cin >> dog_age;
  cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years. \n";
}