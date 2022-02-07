/// @file pa02a.cpp
/// @author Scott Gordon
/// @date 2-2-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Ask for days, hours, minutes and seconds. Convert to seconds.
/// Print output to screen.
/// @note 30 minutes were taken to develop, write, test and debug solution.

// include statements
#include <iostream>

// using namespace statement
using namespace std;

int main() {
    // variable declaration(s)
    int days;    // Days - Used to calculate total seconds
    int hours;   // Hours - Used to calculate total seconds
    int minutes; // Minutes - Used to calculate total seconds
    int seconds; // Seconds - Used to calculate total seconds
    int total;   // Total - Total seconds added in processing phase
    total = 0;

    // input phase
    cout << "Enter days:    ";
    cin >> days;
    cout << "Enter hours:   ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter seconds: ";
    cin >> seconds;

    // processing phase
    total += days * 24 * 60 * 60;
    total += hours * 60 * 60;
    total += minutes * 60;
    total += seconds;

    // output phase
    cout << endl << total << "s ";
    cout << "is equivalent to ";
    cout << days << "d ";
    cout << hours << "h ";
    cout << minutes << "m ";
    cout << seconds << "s" << endl;

    // return statement
    return 0;
}
