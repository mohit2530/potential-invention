#include <iostream>
#include <ostream>

int main() {
  std::cout << "Welcome to Credit and Debit workflow" << std::endl;

  float startingBalance;
  std::cout << "Enter your starting balance: ";
  std::cin >> startingBalance;
  std::cin.clear();
  std::cin.ignore(1000, '\n');

  bool shouldEnter = true;
  float userInput = 0.0;
  while (shouldEnter) {
    int shouldContinue = 0;
    std::cout << "Press (1) to continue, (2) to add debit or credit: "
              << std::endl;
    std::cin >> shouldContinue;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    if (shouldContinue == 1) {
      shouldEnter = false;
      break;
    }
    float userAmt = 0.0;
    std::cout << "Enter amount. Add (-) sign for credit: ";
    std::cin >> userAmt;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    userInput += userAmt;
  }

  float remaining = startingBalance + userInput;
  std::cout << "Your remaining balance is: " << remaining << std::endl;
  return 0;
}