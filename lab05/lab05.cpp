/// @file lab05.cpp
/// @author Scott Gordon
/// @date 3-2-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Follows 10 examples from lab homework with fixes and improvements
/// @note 30 minutes were taken to develop, write, test and debug solution.

#include <iostream>

using namespace std;

/// ---------------------------------------------------------------------------
/// Main entry-point for this application.
///
/// @returns Exit-code for the process - 0 for success
/// ---------------------------------------------------------------------------

int main() {
    int grade = 60;
    int x = 5;
    int product = 0;
    int i = 0;
    char ch;
    int count = 0;

    // 1.
    if (grade >= 60) {
        cout << "Passed.\n";
    } else {
        cout << "Failed.\n";
        cout << "You must take this course again.\n";
    }

    // 2.
    for (int i = 1; i <= 5; i++) {
        product *= i;
    }

    // 3.
    for (double i = 1; i <= 5; i++) {
        cout << i / (i - 1) << ' ' << "\n";
    }

    // 4.
    i = 5;
    for ( ; i <= 1000; i += 5) {
        cout << i << ' ' << "\n";
    };

    // 5.
    i = 1;
    product = 1;

    while (i <= 5){
        product *= i;
        cout << product << "\n";
        i++;
    }

    // 6.
    switch (x) {
        case 5:
            cout << "x is 5\n";
            break;

        case 10:
            cout << "x is 10\n";
            break;

        default:
            cout << "x is neither 5 nor 10\n";
            break;
    }

    // 7.
    for (int i = 1, j = 2; i <= 10 && j <= 10; i+=2, j+=2){
        cout << i << " + " << j << " = " << (i + j) << '\n';
    }

    // 8.
    for (int i = 1; i <= 10; i++) {
        cout << i << " * 2 + 1 = " << (i * 2 + 1) << endl;
    }

    // 9.
    x = 1;
    for (int y = 2; x <= 5 && y <= 5; y++, x++) {
       cout << (x * y) << endl;
    }

    // 10.
    cin.get(ch);
    while (ch != '\n'){
        if (('0' <= ch) && (ch <= '9')){
            count++;
        }
        cin.get(ch);
    }
    cout << "Found " << count << " digit characters.\n";
    return 0;
}
