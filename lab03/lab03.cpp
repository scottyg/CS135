/// @file lab03.cpp
/// @author Scott Gordon
/// @date 2-16-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Ask for sales_price and homeowner_name. 
/// Calculate sellers_cost and agent commission.
/// Print output to screen.
/// @note 45 minutes were taken to develop, write, test and debug solution.

// include statements
#include <iostream>
#include <iomanip>
#include <string>

// using namespace statement
using namespace std;

int main() {
    // constant definitions
    const double SELLERS_RATE = 0.06; // Sellers cost rate
    const double AGENT_RATE = 0.015; // Agent comission rate

    // variable declarations
    double sales_price;
    double sellers_cost;
    double agent_comission;
    string homeowner_name;

    // input phase
    cout << "Enter sales price of home and owner's last name: ";
    cin >> sales_price >> homeowner_name;

    // processing phase
    sellers_cost = sales_price * SELLERS_RATE;
    agent_comission = sales_price * AGENT_RATE;

    // output phase
    cout << left << setw(20) << "Home Owner";
    cout << right << setw(20) << "Price of Home";
    cout << setw(20) << "Seller's Cost";
    cout << setw(20) << "Agent's Commission" << endl;
    cout << setw(80) << setfill('-') << "-" << endl; // 80 chars of -
    cout << left << setw(20) << setfill(' ') << homeowner_name;
    cout << fixed << setprecision(2); // Format following doubles
    cout << right << setw(20) << setfill('*') << sales_price;
    cout << setw(20) << sellers_cost;
    cout << setw(20) << agent_comission << endl;

    // return statement
    return 0;
}
