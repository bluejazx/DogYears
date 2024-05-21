#include <iostream>

int main()
{
  //cretes variables for age and name
  std::string name;
  double humanAge;
  double dogAge;
  //The first two years = 10.5 years for dogs while  every years after is 4 per year
  double earlyYears = 10.5;
  
  //Ask there user for their age and name
  std::cout << "Enter your age in years below: \n";
  std::cin >> humanAge;
  std::cout << "Enter your name below: \n";
  std::cin >> name;

  humanAge = humanAge - 2;
  dogAge = (humanAge*4) + earlyYears;

  std::cout << "Your name is " << name <<  " and your age in dog years is " << dogAge << "\n";

  
}
