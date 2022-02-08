/// @file pa02b.cpp
/// @author Scott Gordon
/// @date 2-7-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Ask for seconds and timezone offset. 
/// Convert seconds to days, hours, minutes and seconds.
/// Calculate timezone offset into hours
/// Print output to screen.
/// @note 1 hour was taken to develop, write, test and debug solution.
/// @see https://earthsky.org/astronomy-essentials/universal-time/

// include statements
#include <iostream>

// using namespace statement
using namespace std;

int main() {
    // constant definitions
    const int SECONDS_TO_MINUTES = 60;
    const int MINUTES_TO_HOURS = 60;
    const int HOURS_TO_DAYS = 24;

    // variable declarations
    long seconds;       // Time in seconds
    int tz_offset;      // Timezone offset
    int days;           // Time converted to days
    int hours;          // Time converted to hours
    int minutes;        // Time converted to minutes

    // input phase
    cout << "Enter time(seconds) and TZ offset(hours): ";
    cin >> seconds >> tz_offset;
    cout << endl;

    // processing phase
    days = seconds / SECONDS_TO_MINUTES / MINUTES_TO_HOURS / HOURS_TO_DAYS;
    seconds = seconds - (days * HOURS_TO_DAYS * MINUTES_TO_HOURS * 
        SECONDS_TO_MINUTES);
    hours = seconds / SECONDS_TO_MINUTES / MINUTES_TO_HOURS;
    seconds = seconds - (hours * MINUTES_TO_HOURS * SECONDS_TO_MINUTES);
    hours = hours + tz_offset;
    if(hours > 24){
        days++;
        hours = hours - 24;
    }
    minutes = seconds / SECONDS_TO_MINUTES;
    seconds = seconds - (minutes * SECONDS_TO_MINUTES);

    //output phase
    cout << days
         << "d "
         << hours
         << "h "
         << minutes
         << "m "
         << seconds
         << "s "
         << endl;

    // return statement
    return 0;
}
