#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
private:
    vector<int> data;

public:
    Matrix(int size) : data(size) {}

    friend istream &operator>>(istream &in, Matrix &mat)
    {
        for (int i = 0; i < mat.data.size(); ++i)
        {
            in >> mat.data[i];
        }
        return in;
    }

    friend std::ostream &operator<<(ostream &out, const Matrix &mat)
    {
        for (const auto &val : mat.data)
        {
            out << val << " ";
        }
        return out;
    }

    Matrix operator+(const Matrix &other) const
    {
        Matrix result(data.size());
        for (int i = 0; i < data.size(); ++i)
        {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }
};

int main()
{
    int size;
    cout << "Enter size of the 1D matrices: ";
    cin >> size;

    Matrix mat1(size), mat2(size), mat3(size);

    cout << "Enter elements of the first matrix: ";
    cin >> mat1;

    cout << "Enter elements of the second matrix: ";
    cin >> mat2;

    mat3 = mat1 + mat2;

    cout << "Result of matrix addition: " << mat3 << endl;

    return 0;
}
