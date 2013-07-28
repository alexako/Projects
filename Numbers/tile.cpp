#include <iostream>
#include <iomanip>

using namespace std;


double calculate(double cost, double width, double height) {
    return (cost * width * height);
}

int main() {

    double cost,
        width,
        height;

    cout << showpoint << fixed << setprecision(2);

    cout << "Enter cost per tile: $";
    cin >> cost;

    cout << "Enter width: ";
    cin >> width;

    cout << "Enter height: ";
    cin >> height;

    cout << "Total cost: $" << calculate(cost, width, height) << endl;

    return 0;
}
