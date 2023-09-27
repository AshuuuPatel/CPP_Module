#include <iostream>
using namespace std;


inline double multiply(double a, double b)
{
    return a * b;
}

inline double cube(double x)
{
    return x * x * x;
}

int main()
{
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Multiplication of " << a << " and " << b << " is: " << multiply(a, b) << endl;
    cout << "Cubic value of " << a << " is: " << cube(a) << endl;
    cout << "Cubic value of " << b << " is: " << cube(b) << endl;

    return 0;
}