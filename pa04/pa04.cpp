/// @file pa04.cpp
/// @author Scott Gordon
/// @date 2-21-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief
/// @note 7 hours were taken to develop, write, test and debug solution.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/// ---------------------------------------------------------------------------
/// Main entry-point for this application.
///
/// @returns Exit-code for the process - 0 for success
/// ---------------------------------------------------------------------------

int main() {

    // local constant definition(s)
    const int UTC = 0;              // Coordinated Universal Time
    const int GMT = 0;              // Greenwich Mean Time
    const int WET = 0;              // Western Europe Time
    const int CET = 1;              // Central Europe Time
    const int EET = 2;              // Eastern Europe Time
    const int IST = 5;              // India Standard Time
    const int IST_MINUTE = 30;  // India Standard Time
    const int NST = -3;             // Newfoundland Standard Time
    const int NST_MINUTE = -30;     // Newfoundland Standard Time
    const int EST = -5;             // Eastern Standard Time
    const int CST = -6;             // Central Standard Time
    const int MST = -7;             // Mountain Standard Time
    const int PST = -8;             // Pacific Standard Time
    const int HST = -10;            // Hawaiian Standard Time
    const int AKST = -9;            // Alaska Standard Time
    const int AEST = 10;            // Australian Eastern Standard Time
    const int ACST = 9;             // Australian Central Standard Time
    const int ACST_MINUTE = 30;     // Australian Central Standard Time
    const int AWST = 8;             // Australian Western Standard Time
    // Magic Numbers
    const int SIXTY = 60;           // SIXTY
    const int TWENTY_FOUR = 24;     // 24 hours
    const int TWELVE = 12;          // 12 hours
    const int ONE = 1;              // One
    const int ZERO = 0;             // Zero

    // local variable declaration(s)
    int exit_code;          // Exit Code
    char ch;                // Test if first input is string or int
    int hour;               // Current hour
    int minute;             // Current minute
    int offset_hour;        // Hour Offset
    int offset_minute;      // Minute Offset
    string noon_midnight;   // Current time as string
    string ampm;            // AM/PM
    string timezone0;       // Time zone 1
    string timezone1;       // Time zone 2

    // initialize variables
    hour = ZERO;
    minute = ZERO;
    offset_hour = ZERO;
    offset_minute = ZERO;

    // input phase
    cin.get(ch);

    // check if number or string
    if ((ch >= '0') && (ch <= '9')) {
        cin.putback(ch);
        cin >> hour;
        cin.ignore();
        cin >> minute;
        cin >> ampm;
    } else {
        cin.putback(ch);
        cin >> noon_midnight;

        if (noon_midnight == "noon") {
            hour = TWELVE;
            minute = ZERO;
            ampm = "p.m.";
        } else if (noon_midnight == "midnight") {
            hour = TWELVE;
            minute = ZERO;
            ampm = "a.m.";
        }
    }

    // read in time zones
    cin >> timezone0 >> timezone1;

    // processing phase
    // convert to 24 hour time
    if (hour != TWELVE && ampm == "p.m.") {
        hour = hour + TWELVE;
    } else if (hour == TWELVE && ampm == "a.m.") {
        hour = hour - TWELVE;
    }

    // get timezone offset from first time zone
    if (timezone0 == "UTC") {
        offset_hour = UTC;
        offset_minute = ZERO;
    } else if (timezone0 == "GMT") {
        offset_hour = GMT;
        offset_minute = ZERO;
    } else if (timezone0 == "WET") {
        offset_hour = WET;
        offset_minute = ZERO;
    } else if (timezone0 == "CET") {
        offset_hour = CET;
        offset_minute = ZERO;
    } else if (timezone0 == "EET") {
        offset_hour = EET;
        offset_minute = ZERO;
    } else if (timezone0 == "IST") {
        offset_hour = IST;
        offset_minute = IST_MINUTE;
    } else if (timezone0 == "NST") {
        offset_hour = NST;
        offset_minute = NST_MINUTE;
    } else if (timezone0 == "EST") {
        offset_hour = EST;
        offset_minute = ZERO;
    } else if (timezone0 == "CST") {
        offset_hour = CST;
        offset_minute = ZERO;
    } else if (timezone0 == "MST") {
        offset_hour = MST;
        offset_minute = ZERO;
    } else if (timezone0 == "PST") {
        offset_hour = PST;
        offset_minute = ZERO;
    } else if (timezone0 == "HST") {
        offset_hour = HST;
        offset_minute = ZERO;
    } else if (timezone0 == "AKST") {
        offset_hour = AKST;
        offset_minute = ZERO;
    } else if (timezone0 == "AEST") {
        offset_hour = AEST;
        offset_minute = ZERO;
    } else if (timezone0 == "ACST") {
        offset_hour = ACST;
        offset_minute = ACST_MINUTE;
    } else if (timezone0 == "AWST") {
        offset_hour = AWST;
        offset_minute = ZERO;
    }

    // calculate First offset
    hour = hour - offset_hour;
    minute = minute - offset_minute;

    // get timezone offset from second time zone
    if (timezone1 == "UTC") {
        offset_hour = UTC;
        offset_minute = ZERO;
    } else if (timezone1 == "GMT") {
        offset_hour = GMT;
        offset_minute = ZERO;
    } else if (timezone1 == "WET") {
        offset_hour = WET;
        offset_minute = ZERO;
    } else if (timezone1 == "CET") {
        offset_hour = CET;
        offset_minute = ZERO;
    } else if (timezone1 == "EET") {
        offset_hour = EET;
        offset_minute = ZERO;
    } else if (timezone1 == "IST") {
        offset_hour = IST;
        offset_minute = IST_MINUTE;
    } else if (timezone1 == "NST") {
        offset_hour = NST;
        offset_minute = NST_MINUTE;
    } else if (timezone1 == "EST") {
        offset_hour = EST;
        offset_minute = ZERO;
    } else if (timezone1 == "CST") {
        offset_hour = CST;
        offset_minute = ZERO;
    } else if (timezone1 == "MST") {
        offset_hour = MST;
        offset_minute = ZERO;
    } else if (timezone1 == "PST") {
        offset_hour = PST;
        offset_minute = ZERO;
    } else if (timezone1 == "HST") {
        offset_hour = HST;
        offset_minute = ZERO;
    } else if (timezone1 == "AKST") {
        offset_hour = AKST;
        offset_minute = ZERO;
    } else if (timezone1 == "AEST") {
        offset_hour = AEST;
        offset_minute = ZERO;
    } else if (timezone1 == "ACST") {
        offset_hour = ACST;
        offset_minute = ACST_MINUTE;
    } else if (timezone1 == "AWST") {
        offset_hour = AWST;
        offset_minute = ZERO;
    }

    // calculate second offset
    hour = hour + offset_hour;
    minute = minute + offset_minute;

    // fix minutes
    if (minute > SIXTY) {
        hour = hour + ONE;
        minute = minute - SIXTY;
    } else if (minute < ZERO) {
        hour = hour - ONE;
        minute = minute + SIXTY;
    } else if (minute == SIXTY) {
        minute = ZERO;
        hour = hour + ONE;
    }

    // fix 24 hour time
    if (hour == TWENTY_FOUR) {
        hour = ZERO;
    } else if (hour > TWENTY_FOUR) {
        hour = hour - TWENTY_FOUR;
    }

    // check am / pm
    switch (hour) {
        case 0:
            ampm = "a.m.";
            break;

        case 1:
            ampm = "a.m.";
            break;

        case 2:
            ampm = "a.m.";
            break;

        case 3:
            ampm = "a.m.";
            break;

        case 4:
            ampm = "a.m.";
            break;

        case 5:
            ampm = "a.m.";
            break;

        case 6:
            ampm = "a.m.";
            break;

        case 7:
            ampm = "a.m.";
            break;

        case 8:
            ampm = "a.m.";
            break;

        case 9:
            ampm = "a.m.";
            break;

        case 10:
            ampm = "a.m.";
            break;

        case 11:
            ampm = "a.m.";
            break;

        case 12:
            ampm = "p.m.";
            break;

        case 13:
            ampm = "p.m.";
            break;

        case 14:
            ampm = "p.m.";
            break;

        case 15:
            ampm = "p.m.";
            break;

        case 16:
            ampm = "p.m.";
            break;

        case 17:
            ampm = "p.m.";
            break;

        case 18:
            ampm = "p.m.";
            break;

        case 19:
            ampm = "p.m.";
            break;

        case 20:
            ampm = "p.m.";
            break;

        case 21:
            ampm = "p.m.";
            break;

        case 22:
            ampm = "p.m.";
            break;

        case 23:
            ampm = "p.m.";
            break;

        case 24:
            ampm = "a.m.";
            break;

        default:
            ampm = "p.m.";
            break;
    }

    // convert back to 12 hour time
    if (hour >= TWELVE && hour <= TWENTY_FOUR) {
        hour = hour - TWELVE;
    } else if (hour <= ZERO) {
        hour = hour + TWELVE;
    }

    if (hour == ZERO) {
        hour = TWELVE;
    }

    // output phase
    if (hour == TWELVE && minute == ZERO && ampm == "a.m.") {
        cout << "midnight" << endl;
    } else if (hour == TWELVE && minute == ZERO && ampm == "p.m.") {
        cout << "noon" << endl;
    } else {
        cout << hour
             << ":"
             << right
             << setw(2)
             << setfill('0')
             << minute
             << " "
             << ampm
             << endl;
    }

    // check if cin is in fail state

    if (cin) {
        exit_code = ZERO;
    } else {
        exit_code = ONE;
    }

    return exit_code;
}
