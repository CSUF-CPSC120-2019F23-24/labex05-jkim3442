// Random Rectangle

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <random>

int main()
{

  //We are setting up the  specification's of the randomized rectangle.
  //Made the randomized length 40.

  srand(time(0));
  int maximum = 40;
  int LENGTH;
  LENGTH = rand() % maximum + 1;

  //Then assigned the Length to a character.

  std::string rectangle;
  rectangle.assign(LENGTH,'#');
  rectangle.assign(LENGTH,'#');
  rectangle.assign(LENGTH,'#');

  //Then output the Length to print the assign.

  std::cout << rectangle << std::endl;
  std::cout << rectangle << std::endl;
  std::cout << rectangle << std::endl;

  return 0;
}
