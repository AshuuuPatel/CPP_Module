#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}

    void display() const
    {
        cout << value << " ";
    }

    friend void swap(Number &a, Number &b);
};

void swap(Number &a, Number &b)
{
    a.value = a.value + b.value;
    b.value = a.value - b.value;
    a.value = a.value - b.value;
}

int main()
{
    int n, m;
    cout << "Enter two values: ";
    cin >> n >> m;

    Number num1(n), num2(m);

    cout << "Before swapping: ";
    num1.display();
    num2.display();

    swap(num1, num2);

    cout << "\nAfter swapping: ";
    num1.display();
    num2.display();

    return 0;
}
