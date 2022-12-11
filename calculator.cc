#include <iostream>

using namespace std;

int main()
{
    double a, b;
    char op;

    // Read in the first number
    cout << "Enter the first number: ";
    cin >> a;

    // Read in the operator
    cout << "Enter the operator (+, -, *, or /): ";
    cin >> op;

    // Read in the second number
    cout << "Enter the second number: ";
    cin >> b;

    // Perform the specified operation
    switch (op)
    {
        case '+':
            cout << "The result is: " << a + b << endl;
            break;
        case '-':
            cout << "The result is: " << a - b << endl;
            break;
        case '*':
            cout << "The result is: " << a * b << endl;
            break;
        case '/':
            cout << "The result is: " << a / b << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }

    return 0;
}
