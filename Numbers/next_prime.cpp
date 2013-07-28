#include <iostream>

using namespace std;


bool is_prime(int num) {
    /*** Checks if given argument is a prime number ***/

    for (int i = 2; i < num; i++) {
        if (!(num % i))
            return false;
    }

    return true;

}

int main() {

    char next;
    int prime = 2;

    do {

        cout << "Prime: " << prime << endl;

        cout << "Would you like the next prime number? <Y/n>: ";
        cin >> next;

        do {
            prime++;
        } while (!(is_prime(prime)));

    } while (next == 'Y' || next == 'y');

    return 0;
}
