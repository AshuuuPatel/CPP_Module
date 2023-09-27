#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}

    friend int findMax(const Number &a, const Number &b);
};

int findMax(const Number &a, const Number &b)
{
    return (a.value > b.value) ? a.value : b.value;
}

int main()
{
    int n, m;
    cout << "Enter two values: ";
    cin >> n >> m;

    Number num1(n), num2(m);

    cout << "The numbers are: " << 5 << " and " << 10 << endl;
    cout << "The maximum number is: " << findMax(num1, num2) << endl;

    return 0;
}
