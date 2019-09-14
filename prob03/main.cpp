// This program calculates a person's height in feet (') and inches (").
#include <iostream>
int main()
{
  int inches;
  int feet;
  int moduleinch;

  // Asks for person in inches
  std::cout << "How tall is this person in inches?\n";
  std::cin  >> inches;

  // Converts the inches to feet.
  feet = inches / 12;

  //Convers feet to inches.
  moduleinch = inches % 12;

  //Displays the feet of the person.
  std::cout << "This person is " << feet << "\'" << moduleinch << "\"";

  return 0;

}
