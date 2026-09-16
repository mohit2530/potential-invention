#include <iostream>
#include <map>
#include <string>

int main() {

  std::map<int, std::string> inventories;

  int shouldContinue = 1;
  int key = 1;
  while (shouldContinue != 0) {
    std::string value;
    std::cout << "Enter value to store: ";
    std::cin >> value;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
    if (value.length() > 0) {
      inventories[key] = value;
    }
    key++;

    std::cout << "Enter (1) to continue, (0) to stop: ";
    std::cin >> shouldContinue;
    std::cin.clear();
    std::cin.ignore(1000, '\n');
  }

  std::cout << "The total number of inventories added are: "
            << inventories.size() << std::endl;

  for (int i = 0; i < inventories.size(); ++i) {
    std::cout << "Item: " << inventories[i + 1] << std::endl;
  }

  return 0;
}