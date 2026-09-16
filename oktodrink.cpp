#include <iostream>
#include <ostream>
#include <string>

// User class
class User {
public:
  std::string username;
  std::string password;
  int age;

  User(std::string username, std::string password, int age) {
    this->username = username;
    this->password = password;
    this->age = age;
  }

  bool validAge() {
    if (age > 18)
      return true;
    return false;
  }
};

int main() {
  User person1("John", "password", 17);

  bool isValidAgeForAlcohol = person1.validAge();
  std::cout << std::boolalpha; // to return true / false
  std::cout << "Is user ok to drink alcohol: " << isValidAgeForAlcohol
            << std::endl;
  return 0;
};
