#include <iostream>
using namespace std;

class Calculator
{
public:
    double add(double a, double b)
    {
        return a + b;
    }

    double subtract(double a, double b)
    {
        return a - b;
    }

    double multiply(double a, double b)
    {
        return a * b;
    }

    double divide(double a, double b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
        return a / b;
    }
};

int main()
{
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Result: " << calc.add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << calc.subtract(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << calc.multiply(num1, num2) << endl;
        break;
    case '/':
        cout << "Result: " << calc.divide(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operation!" << endl;
        break;
    }

    return 0;
}