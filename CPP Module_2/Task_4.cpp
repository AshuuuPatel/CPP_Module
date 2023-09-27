#include <iostream>
using namespace std;

class Arithmetic
{
private:
    double num1, num2;

public:
        Arithmetic(double a, double b) : num1(a), num2(b) {}

    double add()
    {
        return num1 + num2;
    }

    double subtract()
    {
        return num1 - num2;
    }

    double multiply()
    {
        return num1 * num2;
    }

    double divide()
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
        return num1 / num2;
    }
};

int main()
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Arithmetic arithObj(a, b);

    cout << "Addition of " << a << " and " << b << " is: " << arithObj.add() << endl;
    cout << "Subtraction of " << a << " and " << b << " is: " << arithObj.subtract() << endl;
    cout << "Multiplication of " << a << " and " << b << " is: " << arithObj.multiply() << endl;
    cout << "Division of " << a << " by " << b << " is: " << arithObj.divide() << endl;

    return 0;
}
