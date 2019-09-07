// This program tests output on the ASCII character set, and on the sizeof operator.

#include <iostream>

int main()
{
  // TODO#1: try changing these values to others found in the ASCII character set
  // The class Quick Reference Guide contains this chart on page 5
  char my_char1 = 12;   // decimal
  char my_char2 = 0x48; // hex
  char my_char3 = 'H';  // character

  std::cout << "Char1: " << my_char1 << std::endl;
  std::cout << "Char2: " << my_char2 << std::endl;
  std::cout << "Char3: " << my_char3 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#2: the following statement displays a plus sign
  // add 3 more cout statements that all print the same thing - a plus sign
  // however, use a different method to do so for each cout statement
  // hint: use the ASCII character set
  char my_char10 = 0x2B; //Second way to create a plus sign
  char my_char43 = 43; //Third way to create a plus sign
  char my_char20 = '+';
  std::cout << "+" << std::endl;
  std::cout << '+' << std::endl;
  std::cout << "Char10:"  << my_char10 << std::endl;
  std::cout << "Char43:"  << my_char43 << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#3: update the following statement to include escape characters
  // note that clang does not require an escape character on the single quote
  // but many other compilers do require it
  std::cout << "\'Y\'" << std::endl;

  std::cout << std::endl; // blank line to separate the different exercises

  // TODO#4: try changing the variable types and the data types in the
  // statements below to see what is returned by the sizeof operator
  long long my_bool = 4;
  std::cout << my_bool << '4' << sizeof(my_bool) << '\n';
  int my_int = 2;
  std::cout << my_int << '2' << sizeof(my_int) << '\n';

  long amount;
  std::cout << "A int is a whole number " << sizeof(char) << " bytes\n";
  std::cout << "The variable \"amount\" is stored in " << sizeof(amount) << " bytes\n";

  return 0;
}
