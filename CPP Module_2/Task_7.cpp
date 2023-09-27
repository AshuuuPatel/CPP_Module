#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void initializePerson(const string &personName, int personAge)
    {
        name = personName;
        age = personAge;
    }

    void readPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : virtual public Person
{
protected:
    double percentage;

public:
    void initializeStudent(double studentPercentage)
    {
        percentage = studentPercentage;
    }

    void readStudent()
    {
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudent() const
    {
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : virtual public Person
{
protected:
    double salary;

public:
    void initializeTeacher(double teacherSalary)
    {
        salary = teacherSalary;
    }

    void readTeacher()
    {
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacher() const
    {
        cout << "Salary: $" << salary << endl;
    }
};

class StudentTeacher : public Student, public Teacher
{
public:
    void readData()
    {
        readPerson();
        readStudent();
        readTeacher();
    }

    void displayData()
    {
        displayPerson();
        displayStudent();
        displayTeacher();
    }
};

int main()
{
    StudentTeacher person;

    cout << "Enter details for the Student-Teacher:\n";
    person.readData();

    cout << "\nDetails of the Student-Teacher:\n";
    person.displayData();

    return 0;
}
