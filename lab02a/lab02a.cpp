/// @file lab02a.cpp
/// @author Scott Gordon
/// @date 2-2-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Ask for users name and how many hours they will study.
/// Print output to screen.
/// @note 30 minutes were taken to develop, write, test and debug solution.

// include statements
#include <iostream>
#include <string>

// using namespace statement
using namespace std;

int main() {
    // variable declaration(s)
    string name;
    string hours_text;
    double study_hours;

    // input phase
    cout << "Please enter your name:   ";
    cin >> name;
    cout << "Please enter study hours: ";
    cin >> study_hours;

    // processing phase
    if( study_hours > 1 ){
        hours_text = "hours";
    } else {
        hours_text = "hour";
    }

    // output phase
    cout << endl;
    cout << "Hello, " << name << "! ";
    cout << "Today, you need to study " << study_hours;
    cout << " " << hours_text << "." << endl;

    // return statement
    return 0;
}
