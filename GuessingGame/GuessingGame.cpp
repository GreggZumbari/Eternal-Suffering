#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int input;

  int real;
  int max = 100;

  srand (time(NULL));
  real = rand()%100;
  std::cout << real;
  /*
  std::cout << "Hello sir/ma'am, please enter a number between 1 and 100: ";
  while (!input <= 100 && !input >= 0) {
    try {
      
    } catch (int ex) {
      std::cout << "That input is invalid, please enter a number between 1 and 100: ";
    }
  }
  */
  return 0;
}
