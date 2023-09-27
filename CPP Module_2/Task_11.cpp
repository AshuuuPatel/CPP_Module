#include <iostream>
#include <cstring>
using namespace std;

class MyString
{
private:
    char *str;
    int length;

public:
    MyString(const char *initStr = "")
    {
        length = strlen(initStr);
        str = new char[length + 1];
        strcpy(str, initStr);
    }

    MyString(const MyString &source)
    {
        length = source.length;
        str = new char[length + 1];
        strcpy(str, source.str);
    }

    ~MyString()
    {
        delete[] str;
    }

    MyString operator+(const MyString &other) const
    {
        MyString result;
        result.length = length + other.length;
        delete[] result.str;
        result.str = new char[result.length + 1];
        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    friend std::ostream &operator<<(std::ostream &out, const MyString &s)
    {
        out << s.str;
        return out;
    }
};

int main()
{
    MyString str1("Hello, ");
    MyString str2("World!");
    MyString str3;

    str3 = str1 + str2;

    cout << "Concatenated string: " << str3 << endl;

    return 0;
}
