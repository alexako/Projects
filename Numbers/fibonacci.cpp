#include <iostream>

using namespace std;


int fibonacci(int nth) {

    int a = 0,
        b = 1,
        temp;

    for (int i = 1; i < nth; i++) {
        temp = a;
        a = a + b;
        b = temp;
    }

    return a;
}

int main() {

    int num;

    cout << "Enter nth number of the Fibonacci series: ";
    cin >> num;

    cout << endl << "Series up to " << num << ": ";

    for (int i = 1; i <= num; i++) {
        cout << " " << fibonacci(i);
    }

    cout << endl << endl
        << num << ": " << fibonacci(num) << endl;

    return 0;
}
