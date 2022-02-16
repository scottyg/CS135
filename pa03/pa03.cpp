/// @file pa03.cpp
/// @author Scott Gordon
/// @date 2-16-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Input data file. 
/// Calculate sellers_cost and agent commission.
/// Print output to screen.
/// @note 652 -  minutes were taken to develop, write, test and debug solution.

// include statements
#include <iostream>
#include <iomanip>
#include <string>

// using namespace statement
using namespace std;

int main() {
    // constant definitions
    const double SELLERS_RATE = 0.06; // Sellers cost rate
    const double AGENCY_RATE = 0.03; // Agency commission rate
    const double AGENT_RATE = 0.015; // Agent commission rate

    // variable declarations
    string report_title;        // Title of report
    unsigned int report_total;           // Total number of report items

    string homeowner_name_1;      // Homeowner Name #1
    int sale_date_1;              // Date of sale #1
    double sell_price_1;          // Cost of home #1
    double sales_cost_1;          // Seller fees #1
    double agency_commission_1;   // Agency Commission #1
    double agent_commission_1;    // Agent Commission #1

    string homeowner_name_2;      // Homeowner Name #2
    int sale_date_2;              // Date of sale #2
    double sell_price_2;          // Cost of home #2
    double sales_cost_2;          // Seller fees #2
    double agency_commission_2;   // Agency Commission #2
    double agent_commission_2;    // Agent Commission #2

    string homeowner_name_3;      // Homeowner Name #3
    int sale_date_3;              // Date of sale #3
    double sell_price_3;          // Cost of home #3
    double sales_cost_3;          // Seller fees #3
    double agency_commission_3;   // Agency Commission #3
    double agent_commission_3;    // Agent Commission #3

    // input phase
    cin.ignore(2, ' ');
    cin >> report_title;
    cin >> report_total;
    // Get first item
    cin >> sale_date_1;
    cin >> sell_price_1;
    getline(cin, homeowner_name_1);

    cout << homeowner_name_1;

    // processing phase
    // sellers_cost = sales_price * SELLERS_RATE;
    // agent_commission = sales_price * AGENT_RATE;

    // output phase
    // cout << left << setw(20) << "Home Owner";
    // cout << right << setw(20) << "Price of Home";
    // cout << setw(20) << "Seller's Cost";
    // cout << setw(20) << "Agent's Commission" << endl;
    // cout << setw(80) << setfill('-') << "-" << endl; // 80 chars of -
    // cout << left << setw(20) << setfill(' ') << homeowner_name;
    // cout << fixed << setprecision(2); // Format following doubles
    // cout << right << setw(20) << setfill('*') << sales_price;
    // cout << setw(20) << sellers_cost;
    // cout << setw(20) << agent_commission << endl;

    // return statement
    return 0;
}
