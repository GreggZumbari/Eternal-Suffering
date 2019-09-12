#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
  int real;
  int tries;

  int input = NULL;
  int max = 100;

  //Generating the random number
  srand(time(NULL));
  real = rand() % max;

  //Start the game
  std::cout << "Hello sir/ma'am, please enter a number between 1 and " << max << ": " << endl;

  //Ask for number input
  try {
    std::cin >> input;
  }
  catch (int ex)
  {}

  while (true) {
    //If input is invalid, keep trying until the stupid user finally gives you a correct input
    while (input == NULL || input > 100 || input < 0) {
      std::cout << "That input is invalid, please enter a number between 1 and " << max << ":" << endl;
      try {
	std::cin >> input;
      }
      catch (int ex) {}
    }

    //Compare if their guess to the number, and return an output
    if (input > real) {
      //Too high
    }
  }
  return 0;
}
