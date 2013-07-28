#include <iostream>
#include <iomanip>

using namespace std;


int main() {

    double total,
           rate;

    int months;

    cout << showpoint << fixed << setprecision(2);

    cout << "Enter total cost of house: $";
    cin >> total;

    cout << "Enter term length (in months): ";
    cin >> months;

    cout << "Enter interest rate (in %): ";
    cin >> rate;

    cout << "Monthly mortage: $" << (total/months) + ((total/months) * (rate/100))
         << " over " << months << " months." << endl;


    return 0;
}
