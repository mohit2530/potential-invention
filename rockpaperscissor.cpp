#include <iostream>
#include <cctype>

int main() {

  std::cout << "Rock, Paper Scissor game" << std::endl;

  char playerOneInput = ' ';
  char playerTwoInput = ' ';

  std::cout << "Player One." << std::endl;
  std::cout << "Enter (R) for Rock, (P) for Paper, (S) for Scissor: ";
  std::cin >> playerOneInput;
  playerOneInput = std::tolower(playerOneInput);
  std::cin.clear();
  std::cin.ignore(1000, '\n');

  std::cout << "Player Two." << std::endl;
  std::cout << "Enter (R) for Rock, (P) for Paper, (S) for Scissor: ";
  std::cin >> playerTwoInput;
  playerTwoInput = std::tolower(playerTwoInput);
  std::cin.clear();
  std::cin.ignore(1000, '\n');

  if (playerOneInput == 'r' && playerTwoInput == 's') {
    std::cout << "Player One Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == 'r' && playerTwoInput == 'p') {
    std::cout << "Player Two Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == 'p' && playerTwoInput == 's') {
    std::cout << "Player Two Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == 'p' && playerTwoInput == 'r') {
    std::cout << "Player One Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == 's' && playerTwoInput == 'r') {
    std::cout << "Player Two Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == 's' && playerTwoInput == 'p') {
    std::cout << "Player One Wins" << std::endl;
    return 0;
  }

  if (playerOneInput == playerTwoInput) {
    std::cout << "Tie" << std::endl;
    return 0;
  }

  std::cout << "No winner. Try again" << std::endl;
  return 0;
}