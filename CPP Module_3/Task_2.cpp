#include <iostream>
using namespace std;

// Template function to swap two values
template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

// Template function to perform selection sort on an array
template <typename T>
void selectionSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main()
{
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    selectionSort(intArray, intArraySize);
    cout << "Sorted Integer Array: ";
    for (int i = 0; i < intArraySize; ++i)
    {
        cout << intArray[i] << " ";
    }
    cout << endl;

    return 0;
}
