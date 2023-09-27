#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(const string &name, const int &accNum, const string &accType, double initBalance)
    {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited amount: " << amount << "\t\t New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds! Cannot withdraw." << endl;
            return;
        }
        balance -= amount;
        cout << "Withdrawn amount: " << amount << "\t\t Remaining balance: " << balance << endl
             << endl;
    }

    void display() const
    {
        cout << "Name: " << depositorName << endl;
        cout << "Balance: " << balance << endl
             << endl;
    }
};

int main()
{
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;
    int deposit, withdraw;

    cout << "Enter Depositor Name : ";
    cin >> depositorName;

    cout << "Enter Account Number : ";
    cin >> accountNumber;

    cout << "Which type of your account : ";
    cin >> accountType;

    cout << "Enter your Balance : ";
    cin >> balance;

    cout << "How many money you want to Deposit : ";
    cin >> deposit;

    cout << "How many money you want to Withdraw : ";
    cin >> withdraw;

    BankAccount account;
    account.assignValues(depositorName, accountNumber, accountType, balance);

    account.display();

    account.deposit(deposit);

    account.withdraw(withdraw);

    account.display();

    return 0;
}
