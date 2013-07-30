#include <iostream>
#include <iomanip>

using namespace std;


double tax(double amount, double rate) {
    /***
        Returns the amount of tax
        rate parameter must be in percentage
    ***/

    return amount * (rate/100.0);
}

int main() {

    double amount, rate;

    cout << showpoint << fixed << setprecision(2);

    cout << "Enter totalamount: $";
    cin >> amount;

    cout << "Enter either country or state tax rate (in percent): ";
    cin >> rate;

    cout << "Tax amount: $" << tax(amount, rate) << endl
         << "Total: $" << amount + tax(amount, rate) << endl;

    return 0;
}
