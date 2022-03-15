/// @file lab06a.cpp
/// @author Scott Gordon
/// @date 3-14-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Use pre defined functions and write user defined functions
/// @note 30 minutes were taken to develop, write, test and debug solution.

#include <iostream>
#include <cmath>

using namespace std;

// Declare (prototypes)
double fahrenheit(double celsius);
double celsius(double fahrenheit);
int minimum(int a, int b);
int maximum(int a, int b);
double average(int num1, int num2, int num3);
int median(int num1, int num2, int num3);

int main() {
    // Variable Declaration
    int input0;
    int input1;
    int input2;

    // a. floor(44.56) and floor(-23.78)
    cout << "floor(44.56): " << floor(44.56) << '\n';
    cout << "floor(-23.78): " << floor(-23.78) << '\n';

    // b. ceil(25.23) and ceil(-2.89)
    cout << "ceil(25.23): " << ceil(25.23) << '\n';
    cout << "ceil(-2.89): " << ceil(-2.89) << '\n';

    // c. pow(5.0, 3) and pow(5, -3)
    cout << "pow(5.0, 3): " << pow(5.0, 3) << '\n';
    cout << "pow(5, -3): " << pow(5, -3) << '\n';

    // d. sqrt(44.56)
    cout << "sqrt(44.56): " << sqrt(44.56) << '\n';

    // Fahrenheit
    cout << "-40 Deg C: " << fahrenheit(-40) << " Deg F\n";
    cout << "0 Deg C: " << fahrenheit(0) << " Deg F\n";
    cout << "15 Deg C: " << fahrenheit(15) << " Deg F\n";
    cout << "25 Deg C: " << fahrenheit(25) << " Deg F\n";
    cout << "100 Deg C: " << fahrenheit(100) << " Deg F\n";

    // Celsius
    cout << "-40 Deg F: " << celsius(-40)  << " Deg C\n";
    cout << "32 Deg F: " << celsius(32)  << " Deg C\n";
    cout << "59 Deg F: " << celsius(59)  << " Deg C\n";
    cout << "77 Deg F: " << celsius(77)  << " Deg C\n";
    cout << "212 Deg F: " << celsius(212)  << "C Deg \n";

    // Minimum
    cout << "Enter two numbers: ";
    cin >> input0 >> input1;
    cout << "The smaller number is: " << minimum(input0, input1) << '\n';

    // Maximum
    cout << "Enter two numbers: ";
    cin >> input0 >> input1;
    cout << "The larger number is: " << maximum(input0, input1) << '\n';

    // Average
    cout << "Enter three numbers: ";
    cin >> input0 >> input1 >> input2;
    cout << "The average is: " << average(input0, input1, input2) << '\n';

    // Median
    cout << "Enter three numbers: ";
    cin >> input0 >> input1 >> input2;
    cout << "The median is: " << median(input0, input1, input2) << '\n';

    return 0;
}

/// Returns Fahrenheit equivalent of celsius temperature.
/// @param celsius A Celsius temperature to convert.
/// @return The Fahrenheit temperature.
double fahrenheit(double celsius) {
    return 9.0 / 5 * celsius + 32;
}

/// Returns Celsius equivalent of fahrenheit temperature.
/// @param fahrenheit A Fahrenheit temperature to convert.
/// @return The Celsius temperature.
double celsius(double fahrenheit) {
    return 5.0 / 9 * (fahrenheit - 32);
}

/// Returns the smaller of the given values.
/// @param a A value to compare.
/// @param b A value to compare.
int minimum(int a, int b) {
    return (a < b) ? a : b;
}

/// Returns the larger of the given values.
/// @param a A value to compare.
/// @param b A value to compare.
int maximum(int a, int b) {
    return (a > b) ? a : b;
}

/// Returns the average of the given values
/// @param num1 A value to compare.
/// @param num2 A value to compare.
/// @param num3 A value to compare.
double average(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

/// Returns the median of the given values
/// @param num1 A value to compare.
/// @param num2 A value to compare.
/// @param num3 A value to compare.
int median(int num1, int num2, int num3) {
    return maximum(minimum(num1, num2), minimum(maximum(num1, num2), num3));
}
