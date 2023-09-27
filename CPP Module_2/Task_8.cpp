#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNumber;

public:
    void inputRollNumber()
    {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() const
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Student
{
protected:
    double subject1Marks;
    double subject2Marks;

public:
    void inputMarks()
    {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1Marks;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2Marks;
    }

    void displayMarks() const
    {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

class Result : public Test
{
private:
    double totalMarks;

public:
    void calculateTotalMarks()
    {
        totalMarks = subject1Marks + subject2Marks;
    }

    void displayTotalMarks()
    {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result student;

    student.inputRollNumber();
    student.inputMarks();
    student.calculateTotalMarks();

    cout << "\nStudent's Details:\n";
    student.displayTotalMarks();

    return 0;
}
