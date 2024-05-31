#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int numberOfTournaments;
    int startingPoints;
    cin >> numberOfTournaments >> startingPoints;

    int numberOfWins = 0;
    int onlyTournamentPoints = 0;

    for (int i = 0; i < numberOfTournaments; i++)
    {
        string tournamentStage;
        cin >> tournamentStage;

        if (tournamentStage == "W")
        {
            startingPoints += 2000;
            onlyTournamentPoints += 2000;
            numberOfWins++;
        }
        else if (tournamentStage == "F")
        {
            startingPoints += 1200;
            onlyTournamentPoints += 1200;
        }
        else if (tournamentStage == "SF")
        {
            startingPoints += 720;
            onlyTournamentPoints += 720;
        }
    }

    double averagePoints = (double)onlyTournamentPoints / numberOfTournaments;
    double averageWins = (double)numberOfWins / numberOfTournaments * 100.0;

    cout << "Final points: " << startingPoints << endl;

    cout << "Average points: " << floor(averagePoints) << endl;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << averageWins << "%" << endl;

}

