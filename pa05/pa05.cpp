/// @file pa04.cpp
/// @author Scott Gordon
/// @date 2-26-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Validates ISBN-10 numbers
/// @note 4 hours were taken to develop, write, test and debug solution.

#include <iostream>

using namespace std;

/// ---------------------------------------------------------------------------
/// Main entry-point for this application.
///
/// @returns Exit-code for the process - 0 for success or 1 for failure
/// ---------------------------------------------------------------------------

int main() {
    // local variable declaration(s)
    int exit_code;      // Main function exit code
    int iterations;     // Number of ISBN-10's

    // initialize variables
    exit_code = 0;

    // input, processing and output phase
    cin >> iterations;
    cin.ignore(2, '\n');

    for (int i = 0; i < iterations; i++) {

        char ch;
        int counter = 0;
        int sum1 = 0;
        int sum2 = 0;

        while (counter < 20) {
            cin.get(ch);

            switch (ch) {
                case '-':
                case ' ':
                    break;

                case '\n':
                    counter = 20;
                    break;

                case '0':
                    //~ sum1 += 0;
                    sum2 += sum1;
                    counter++;
                    break;

                case '1':
                    sum1 += 1;
                    sum2 += sum1;
                    counter++;
                    break;

                case '2':
                    sum1 += 2;
                    sum2 += sum1;
                    counter++;
                    break;

                case '3':
                    sum1 += 3;
                    sum2 += sum1;
                    counter++;
                    break;

                case '4':
                    sum1 += 4;
                    sum2 += sum1;
                    counter++;
                    break;

                case '5':
                    sum1 += 5;
                    sum2 += sum1;
                    counter++;
                    break;

                case '6':
                    sum1 += 6;
                    sum2 += sum1;
                    counter++;
                    break;

                case '7':
                    sum1 += 7;
                    sum2 += sum1;
                    counter++;
                    break;

                case '8':
                    sum1 += 8;
                    sum2 += sum1;
                    counter++;
                    break;

                case '9':
                    sum1 += 9;
                    sum2 += sum1;
                    counter++;
                    break;

                case 'X':
                    sum1 += 10;
                    sum2 += sum1;
                    counter++;
                    break;

                default:
                    sum1 = 0;
                    sum2 = 1;
                    counter++;
                    break;
            }

            if (ch != '\n' && ch != ' ') {
                cout << ch;
            }
        }

        if ((sum2 % 11) == 0) {
            cout << " is correct." << endl;
        } else {
            cout << " is incorrect." << endl;
            exit_code = 1;
        }
    }

    return exit_code;
}
