/// @file lab04.cpp
/// @author Scott Gordon
/// @date 2-21-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Determine if a rectangle or square has the larger area and if one...
/// @brief can fit inside the other.
/// @note 30 minutes were taken to develop, write, test and debug solution.

#include <iostream>

using namespace std;

/// ---------------------------------------------------------------------------
/// Main entry-point for this application.
///
/// @returns Exit-code for the process - 0 for success
/// ---------------------------------------------------------------------------

int main() {
    // local variable declaration(s)
    double width;       // Width of rectangle
    double height;      // Height of rectangle
    double square_side; // Side of a square

    // input phase
    cout << "Enter width, height, square_side: ";
    cin >> width >> height >> square_side;

    // processing phase and output phase
    cout << endl;
    // Check which object has the larger area
    if ((width * height) < (square_side * square_side)) {
        cout << "The object with the greatest area is the square." << endl;
    } else if (width * height == square_side * square_side) {
        cout << "The square and the rectangle have the same area." << endl;
    } else {
        cout << "The object with the greatest area is the rectangle." << endl;
    }
    // Check which object fits inside the other
    if (width > square_side && height > square_side) {
        cout << "The square fits inside the rectangle." << endl;
    } else if (width < square_side && height < square_side) {
        cout << "The rectangle fits inside the square." << endl;
    } else {
        cout << "Neither shape fits inside the other." << endl;
    }

    return 0;
}
