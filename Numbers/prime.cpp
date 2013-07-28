#include <iostream>

using namespace std;


bool is_prime(int num) {
    /*** Checks if given argument is a prime number ***/

    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }

    return true;
}

int main() {

    int num;

    cout << "Enter a number to find its prime factors: ";
    cin >> num;

    cout << "Prime factors: ";
    for (int i = 2; i < num; i++) {
        if (num % i == 0 && is_prime(i))
            cout << i << " ";
    }

    cout << endl;

    return 0;
}
