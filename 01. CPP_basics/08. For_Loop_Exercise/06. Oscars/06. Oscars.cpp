#include <iostream>
#include <string>

using namespace std;

int main()
{
    string actorName;
    getline(cin >> ws, actorName);

    double points;
    int numberOfEvaluators;

    cin >> points >> numberOfEvaluators;

    cout.setf(ios::fixed);
    cout.precision(1);

    for (int i = 0; i < numberOfEvaluators; i++)
    {
        string evaluatorName;
        getline(cin >> ws, evaluatorName);

        double pointsFromEvaluator;

        cin >> pointsFromEvaluator;

        int evaluatorNameLength = evaluatorName.length();

        points += evaluatorNameLength * pointsFromEvaluator / 2;

        if (points >= 1250.5)
        {
            cout << "Congratulations, " << actorName << " got a nominee for leading role with " << points << "!" << endl;

            return 0;
        }

    }

    
        cout << "Sorry, " << actorName << " you need " << 1250.5 - points << " more!" << endl;
    



}

