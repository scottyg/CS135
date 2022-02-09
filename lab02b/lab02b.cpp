/// @file lab02b.cpp
/// @author Scott Gordon
/// @date 2-7-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Ask for num1, num2, and name. Add numbers, add SECRET number
/// Print output to screen.
/// @note 15 minutes were taken to develop, write, test and debug solution.

// include statements
#include <iostream>
#include <string>

// using namespace statement
using namespace std;

int main() {
    // constant definitions
    const int SECRET = 11;      // SECRET number
    const double RATE = 12.50;  // Not Used

    // variable declarations
    int num1;               // Number 1
    int num2;               // Number 2
    int new_num;            // Numbers added together and add SECRET
    string name;            // Users last name
    double hours_worked;    // Not Used
    double wages;           // Not Used

    // input phase
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter your last name: ";
    cin >> name;

    // processing phase / output phase
    cout << "The value of num1 = "
         << num1
         << ", and the value of num2 = "
         << num2
         << "."
         << endl;
    new_num = num1 + num2;
    cout << "The value of new_num is "
         << new_num
         << "."
         << endl;
    new_num = new_num + SECRET;
    cout << "The new value of new_num is "
         << new_num
         << "."
         << endl;
    cout << "Your last name is "
         << name
         << "."
         << endl;

    // return statement
    return 0;
}
