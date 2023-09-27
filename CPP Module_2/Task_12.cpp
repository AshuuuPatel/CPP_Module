#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.141592653589793;

double calculateArea(double length, double breadth)
{
    return length * breadth;
}

double calculateArea(double base, double height, char)
{
    return 0.5 * base * height;
}

double calculateArea(double radius)
{
    return PI * radius * radius;
}

int main()
{
    double length, breadth, base, height, radius;

    cout << "Enter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;

    cout << "Enter base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateArea(base, height, 't') << endl;

    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    return 0;
}
