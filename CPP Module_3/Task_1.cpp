#include <iostream>
using namespace std;
template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter Two numbers : ";
    cin >> num1 >> num2;

    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
