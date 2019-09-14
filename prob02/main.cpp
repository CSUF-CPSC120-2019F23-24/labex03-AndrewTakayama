// This program calculates the amount of paint needed.

#include <iostream>

int main()
{
 // one gallon of paint covers 340 square feet
 double coverage = 340;
 double height = 6;
 double length = 100;

 // calculate how many gallons of paint it will take to cover
 // the area with 2 coats of paint
 double area = height * length * 2;
 double gallons = area / coverage;

 std::cout << "It will take " << gallons << " gallons of paint.\n";

 return 0;
}
