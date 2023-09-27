#include <iostream>
using namespace std;

class Cricketer
{
protected:
    string name;

public:
    void inputName()
    {
        cout << "Enter the name of the cricketer: ";
        cin >> name;
    }

    void displayName() const
    {
        cout << "Name: " << name << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns;
    int matchesPlayed;
    int bestPerformance;
    double averageRuns;

public:
    void inputData()
    {
        cout << "Enter total runs scored by the batsman: ";
        cin >> totalRuns;

        cout << "Enter total matches played by the batsman: ";
        cin >> matchesPlayed;

        cout << "Enter best performance (highest runs in a match): ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns()
    {
        averageRuns = static_cast<double>(totalRuns) / matchesPlayed;
    }

    void displayData() const
    {
        displayName();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main()
{
    Batsman player;

    player.inputName();
    player.inputData();
    player.calculateAverageRuns();

    cout << "\nBatsman's Details:\n";
    player.displayData();

    return 0;
}
