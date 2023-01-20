#include <iostream>
using namespace std;

int main()
{
    int period = 4;
    int doctors = 7;
    int totalTreatedPatients = 0;
    int totalUntreatedPatients = 0;
    int patients;
    int count = 0;
    cout << "Enter period of time: ";
    cin >> period;
    for (int i = 0; i < period; i++)
    {
        if (count == 2)
        {
            doctors++;
            count = -1;
        }
        cout << "Enter number of patients: ";
        cin >> patients;
        if (patients >= doctors)
        {
            totalTreatedPatients += doctors;
            totalUntreatedPatients += patients - doctors;
        }
        else
        {
            totalTreatedPatients += patients;
        }
        count++;
    }
    cout << totalTreatedPatients << endl;
    cout << totalUntreatedPatients << endl;
}