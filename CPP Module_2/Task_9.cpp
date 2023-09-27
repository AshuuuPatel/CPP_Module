#include <iostream>
using namespace std;

class Mathematics
{
public:
    int operate(int a, int b)
    {
        return a + b;
    }

    double operate(double a, double b)
    {
        return a + b;
    }

    int operate(int a, int b, char c)
    {
        return a - b;
    }

    double operate(double a, double b, char c)
    {
        return a - b;
    }

    int operate(int a, int b, char d, char e)
    {
        return a * b;
    }

    double operate(double a, double b, char d, char e)
    {
        return a * b;
    }

    double operate(double a, int b)
    {
        if (b == 0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
        return a / b;
    }

    double operate(int a, double b)
    {
        if (b == 0.0)
        {
            cout << "Error: Division by zero!" << endl;
            return 0.0;
        }
        return a / b;
    }
};

int main()
{
    Mathematics math;

    cout << "Addition (int): " << math.operate(5, 3) << endl;
    cout << "Addition (double): " << math.operate(5.2, 3.3) << endl;

    cout << "Subtraction (int): " << math.operate(5, 3, 'c') << endl;
    cout << "Subtraction (double): " << math.operate(5.2, 3.3, 'c') << endl;

    cout << "Multiplication (int): " << math.operate(5, 3, 'd', 'e') << endl;
    cout << "Multiplication (double): " << math.operate(5.2, 3.3, 'd', 'e') << endl;

    cout << "Division: " << math.operate(5.2, 3) << endl;
    cout << "Division: " << math.operate(5, 3.3) << endl;

    return 0;
}
