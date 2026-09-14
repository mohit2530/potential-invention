#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter a 1st number: ";
    cin >> a;
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Enter a 2nd number: ";
    cin >> b;
    cin.clear();
    cin.ignore(1000, '\n');
    int sum = a + b;
    cout << "The sum is: " << sum << endl;
}