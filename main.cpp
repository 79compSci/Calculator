#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;

    // Input
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // Calculation and output
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Error: Unsupported operation!" << endl;
    }

    return 0;
}
