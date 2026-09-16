#include <iostream>
#include <string>

class User {
public:
  std::string username;
  std::string firstName;
  std::string lastName;
  int age;
  bool isLegal;

  User(std::string username, std::string firstName, std::string lastName,
       int age) {
    this->username = username;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
  }

  bool isValidAge() {
    if (age >= 21)
      return true;
    return false;
  }
};

int main() {

  User person1("jane_smith", "Jane", "Smith", 31);
  User person2("john_doe", "John", "Doe", 32);

  std::cout << std::boolalpha; // to return true / false
  std::cout << "Is person one of legal age: " << person1.isValidAge()
            << std::endl;
  std::cout << "Is person two of legal age: " << person1.isValidAge()
            << std::endl;

  return 0;
}