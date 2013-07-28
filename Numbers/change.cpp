#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


int main() {

    int dollars,
        quarters,
        dimes,
        nickels,
        pennies;

    double cost,
           payment,
           change;

    cout << showpoint << fixed << setprecision(2);

    cout << "Enter cost of item: $";
    cin >> cost;

    cout << "Enter amount tendered: $";
    cin >> payment;

    while (cost > payment) {
        cerr << "Ask customer for $" << change << " more." << endl;
        cout << "Enter amount tendered: $";
        cin >> payment;
    }

    change = payment - cost;

    dollars = change;
    quarters = fmod(change, 1.0) / 0.25;
    dimes = fmod(change, 0.25) / 0.10;
    nickels = fmod(fmod(change, 0.25), 0.10) / 0.05;
    pennies = fmod(fmod(fmod(change, 0.25), 0.10), 0.05) / 0.01;

    cout << endl << "Breakdown: " << endl
         << "Dollars: " << dollars << "\t = " << dollars * 1.00 << endl
         << "Quarters: " << quarters << "\t = " << quarters * 0.25 << endl
         << "Dimes: " << dimes << "\t = " << dimes * 0.10 << endl
         << "Nickels: " << nickels << "\t = " << nickels * 0.05 << endl
         << "Pennies: " << pennies << "\t = " << pennies * 0.01 << endl;

    for (int i = 0; i < 30; i++) {
        cout << "_";
    }

    cout << endl
         << "Total amount due: \t$" << change << endl; 

    return 0;
}
