#include <iostream>
using namespace std;

int main()
{
    int numberOfClimberGroups;
    cin >> numberOfClimberGroups;

    int climbersOfMusala1 = 0;
    int climbersOfMontBlanc2 = 0;
    int climbersOfKilimanjaro3 = 0;
    int climbersOfK2_4 = 0;
    int climbersOfEverest5 = 0;

    for (int i = 0; i < numberOfClimberGroups; i++)
    {
        
        int numberOfClimbers;
        cin >> numberOfClimbers;

        if (numberOfClimbers <= 5)
        {
            climbersOfMusala1 += numberOfClimbers;
        }
        else if (numberOfClimbers >= 6 && numberOfClimbers <= 12)
        {
            climbersOfMontBlanc2 += numberOfClimbers;
        }
        else if (numberOfClimbers >= 13 && numberOfClimbers <= 25)
        {
            climbersOfKilimanjaro3 += numberOfClimbers;
        }
        else if (numberOfClimbers >= 26 && numberOfClimbers <= 40)
        {
            climbersOfK2_4 += numberOfClimbers;
        }
        else if (numberOfClimbers >= 41)
        {
            climbersOfEverest5 += numberOfClimbers;
        }
    }
    
    int allClimbers = climbersOfMusala1 + climbersOfMontBlanc2 + climbersOfKilimanjaro3 + climbersOfK2_4 + climbersOfEverest5;

    double p1Climbers = (double)climbersOfMusala1 / (double)allClimbers * 100.0;
    double p2Climbers = (double)climbersOfMontBlanc2 / (double)allClimbers * 100.0;
    double p3Climbers = (double)climbersOfKilimanjaro3 / (double)allClimbers * 100.0;
    double p4Climbers = (double)climbersOfK2_4 / (double)allClimbers * 100.0;
    double p5Climbers = (double)climbersOfEverest5 / (double)allClimbers * 100.0;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1Climbers << "%" << endl;
    cout << p2Climbers << "%" << endl;
    cout << p3Climbers << "%" << endl;
    cout << p4Climbers << "%" << endl;
    cout << p5Climbers << "%" << endl;


}

