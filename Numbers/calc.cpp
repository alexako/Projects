#include <iostream>

using namespace std;


int main() {

    int num1,
        num2,
        ans,
        rem;

    char oper;

    cout << "Enter equation: ";
    cin >> num1 >> oper >> num2;

    switch (oper) {
        case '+': ans = num1 + num2;
                break;
        case '-': ans = num1 - num2;
                break;
        case 'X':
        case 'x':
        case '*': ans = num1 * num2;
                break;
        case '/':
                if (num2 > 0) {
                    ans = num1 / num2;
                    rem = num1 % num2;
                }
                else
                    cerr << "Invalid operation: Division by zero";
                break;
        default:
                cerr << "Invalid operator";
    }

    if (oper == '/') {
        cout << endl
             << num1 << " " << oper << " " << num2
             << " = " << ans << " r" << rem << endl;
    }
    else
        cout << endl << num1 << " " << oper << " " << num2 << " = " << ans << endl;

    return 0;
}
