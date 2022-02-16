/// @file pa03.cpp
/// @author Scott Gordon
/// @date 2-16-22
/// @note I pledge my word of honor that I have complied with the
/// CSN Academic Integrity Policy while completing this assignment.
/// @brief Input data file.
/// Calculate sellers_cost and agent cmsn.
/// Print output to screen.
/// @note 2 hours were taken to develop, write, test and debug solution.

// include statements
#include <iostream>
#include <iomanip>
#include <string>

// using namespace statement
using namespace std;

int main() {
    // constant definitions
    const double AGENCY_RATE = 0.03;    // Agency Commission rate
    const double AGENT_RATE = 0.015;    // Agent Commission rate
    const double SALES_COST =
        AGENCY_RATE + (AGENT_RATE * 2); // Total sales cost

    // variable declarations
    string report_title;        // Title of report
    unsigned int report_total;  // Total number of report items
    // first item
    string homeowner_name_1;    // Homeowner Name
    int sale_date_1;            // Date of sale
    double sell_price_1;        // Cost of home
    double sales_cost_1;        // Seller fees
    double agency_cmsn_1;       // Agency Commission
    double agent_cmsn_1;        // Agent Commission
    // second item
    string homeowner_name_2;    // Homeowner Name
    int sale_date_2;            // Date of sale
    double sell_price_2;        // Cost of home
    double sales_cost_2;        // Seller fees
    double agency_cmsn_2;       // Agency Commission
    double agent_cmsn_2;        // Agent Commission
    // third item
    string homeowner_name_3;    // Homeowner Name
    int sale_date_3;            // Date of sale
    double sell_price_3;        // Cost of home
    double sales_cost_3;        // Seller fees
    double agency_cmsn_3;       // Agency Commission
    double agent_cmsn_3;        // Agent Commission
    // totals
    double sell_price_total;    // Combined sell price
    double sales_cost_total;    // Combined sales cost
    double agency_cmsn_total;   // Combined Agency Commission
    double agent_cmsn_total;    // Combined Agent Commission

    // input phase
    // get report information
    cin.ignore(2, ' '); // Ignore Leading '# '
    getline(cin, report_title);
    cin >> report_total;
    // get first item
    cin >> sale_date_1;
    cin >> sell_price_1;
    cin.ignore(1, ' '); // Ignore Tab
    getline(cin, homeowner_name_1);
    // get second item
    cin >> sale_date_2;
    cin >> sell_price_2;
    cin.ignore(1, ' '); // Ignore Tab
    getline(cin, homeowner_name_2);
    // Get third item
    cin >> sale_date_3;
    cin >> sell_price_3;
    cin.ignore(1, ' '); // Ignore Tab
    getline(cin, homeowner_name_3);

    // processing phase
    // process first item
    sales_cost_1 = sell_price_1 * SALES_COST;
    agency_cmsn_1 = sell_price_1 * AGENCY_RATE;
    agent_cmsn_1 = sell_price_1 * AGENT_RATE;
    // process second item
    sales_cost_2 = sell_price_2 * SALES_COST;
    agency_cmsn_2 = sell_price_2 * AGENCY_RATE;
    agent_cmsn_2 = sell_price_2 * AGENT_RATE;
    // process third item
    sales_cost_3 = sell_price_3 * SALES_COST;
    agency_cmsn_3 = sell_price_3 * AGENCY_RATE;
    agent_cmsn_3 = sell_price_3 * AGENT_RATE;
    // process totals
    sell_price_total = sell_price_1 + sell_price_2 + sell_price_3;
    sales_cost_total = sales_cost_1 + sales_cost_2 + sales_cost_3;
    agency_cmsn_total = agency_cmsn_1 + agency_cmsn_2 + agency_cmsn_3;
    agent_cmsn_total = agent_cmsn_1 + agent_cmsn_2 + agent_cmsn_3;

    // output phase
    // output title and header
    cout << report_title << endl << endl;
    cout << left << setw(6) << "Date";
    cout << setw(24) << "Homeowner";
    cout << right << setw(12) << "Sell Price";
    cout << setw(12) << "Sales Cost";
    cout << setw(12) << "Due Agency";
    cout << setw(12) << "Due Agent" << endl;
    cout << setw(78) << setfill('-') << "-" << setfill(' ') << endl;
    // output first item
    cout << right << setw(2) << setfill('0') << sale_date_1;
    cout << left << setw(4) << setfill(' ') << ' ';
    cout << setw(24) << homeowner_name_1;
    cout << right << setw(12) << fixed << setprecision(2) << sell_price_1;
    cout << setw(12) << sales_cost_1;
    cout << setw(12) << agency_cmsn_1;
    cout << setw(12) << agent_cmsn_1 << endl;
    // output second item
    cout << setw(2) << setfill('0') << sale_date_2;
    cout << left << setw(4) << setfill(' ') << ' ';
    cout << setw(24) << homeowner_name_2;
    cout << right << setw(12) << fixed << setprecision(2) << sell_price_2;
    cout << setw(12) << sales_cost_2;
    cout << setw(12) << agency_cmsn_2;
    cout << setw(12) << agent_cmsn_2 << endl;
    // output first item
    cout << setw(2) << setfill('0') << sale_date_3;
    cout << left << setw(4) << setfill(' ') << ' ';
    cout << setw(24) << homeowner_name_3;
    cout << right << setw(12) << fixed << setprecision(2) << sell_price_3;
    cout << setw(12) << sales_cost_3;
    cout << setw(12) << agency_cmsn_3;
    cout << setw(12) << agent_cmsn_3 << endl << endl;
    // output totals
    cout << setw(30) << "TOTALS: ";
    cout << setw(12) << setfill('*') << sell_price_total;
    cout << setw(12) << sales_cost_total;
    cout << setw(12) << agency_cmsn_total;
    cout << setw(12) << agent_cmsn_total << endl;

    // return statement
    return 0;
}
