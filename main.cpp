include <iostream>
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

    // Calculation and output using nested if
    if (op == '+') {
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    } 
    else if (op == '-') {
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    } 
    else if (op == '*') {
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    } 
    else if (op == '/') {
        if (num2 != 0) {
            cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } 
    else {
        cout << "Error: Unsupported operation!" << endl;
    }

    return 0;
}
