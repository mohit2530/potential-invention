#include <iostream>
#include <ostream>
#include <random>

int main() {

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> dist(1, 10);
  
  std::cout << "Casino Guessing Game" << std::endl;

  int randomInt = dist(gen);
  int userGuess = 0;

  while (userGuess != randomInt) {
    std::cout << "Guess the random number: ";
    std::cin >> userGuess;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    if (userGuess == randomInt) {
      std::cout << "You guessed the correct value: " << userGuess << std::endl;
      break;
    }

    std::cout << "Incorrect guess: " << std::endl;
    if (userGuess > randomInt) {
      std::cout << "You guessed a higher value" << std::endl;
    } else {
      std::cout << "You guessed a lower value" << std::endl;
    }
  }

  return 0;
}