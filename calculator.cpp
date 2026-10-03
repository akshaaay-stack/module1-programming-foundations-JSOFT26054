#include <iostream>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "===== MENU CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (choice)
    {
        case 1:
            cout << "Result = " << num1 + num2;
            break;

        case 2:
            cout << "Result = " << num1 - num2;
            break;

        case 3:
            cout << "Result = " << num1 * num2;
            break;

        case 4:
            if (num2 != 0)
            {
                cout << "Result = " << num1 / num2;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}