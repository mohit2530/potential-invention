#include <iostream>

int main() {

    std::cout << "GPA Calculator" << std::endl;

    bool hasMoreSubjects = true;
    float totalGpa = 0;
    int subjects = 0;
    while (hasMoreSubjects) {
        float gpa = 0;
        std::cout << "Enter your GPA: ";
        std::cin >> gpa;
        std::cin.clear();
        std::cin.ignore(1000, '\n');

        int more = 0;
        std::cout << "Enter (1) to add more: ";
        std::cin >> more;
        std::cin.clear();
        std::cin.ignore(1000, '\n');

        subjects++;
        if (more == 0) {
            hasMoreSubjects = false;
            break;
        }
        totalGpa += gpa;
    }

    std::cout << "Your total GPA: " << totalGpa << std::endl;
    std::cout << "Your total Cumulative GPA : " << (totalGpa/subjects) << std::endl;

    return 0;
}