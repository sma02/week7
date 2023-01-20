#include <iostream>
using namespace std;

int main()
{
    int countOfCargo;
    float currentCargo;
    float totalCargo=0;
    float cargoByMiniBus = 0;
    float cargoByTruck = 0;
    float cargoByTrain = 0;
    float averagePrice, percentageByMiniBus, percentageByTruck, percentageByTrain;
    cout << "Enter count of cargo:  ";
    cin >> countOfCargo;
    for (int i = 0; i < countOfCargo; i++)
    {
        cout << "Enter current number of  cargo in tons: ";
        cin >> currentCargo;
        totalCargo+=currentCargo;
        if (currentCargo > 11)
        {
            cargoByTrain += currentCargo;
        }
        else if (currentCargo > 3)
        {
            cargoByTruck += currentCargo;
        }
        else
        {
            cargoByMiniBus += currentCargo;
        }
    }
    averagePrice = (cargoByMiniBus * 200 + cargoByTruck * 175 + cargoByTrain * 120) /totalCargo ;
    percentageByMiniBus=(cargoByMiniBus*100)/totalCargo;
    percentageByTruck=(cargoByTruck*100)/totalCargo;
    percentageByTrain=(cargoByTrain*100)/totalCargo;
    cout<<"Average price per ton: "<<averagePrice<<endl;
    cout<<"Percentage of cargo by minibus: "<<percentageByMiniBus<<endl;
    cout<<"Percentage of cargo by truck: "<<percentageByTruck<<endl;
    cout<<"Percentage of cargo by train: "<<percentageByTrain<<endl;
}