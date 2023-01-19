#include <iostream>
#include<cmath>
using namespace std;

float calculateMoney(int age, float washingMachinePrice, float unitPriceOfToy);
int main()
{
    int age;
    float washingMachinePrice, unitPriceOfToy, result;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter price of washing machine: ";
    cin >> washingMachinePrice;
    cout << "Enter unit price of toy: ";
    cin >> unitPriceOfToy;
    result = calculateMoney(age, washingMachinePrice, unitPriceOfToy);
    if (result < 0)
    {
        result *= -1;
        cout << "NO!" << endl
             << ceil(result,2)<< endl;
    }
    else
    {
        cout << "YES!" << endl
             << result << endl;
    }
}

float calculateMoney(int age, float washingMachinePrice, float unitPriceOfToy)
{
    int numberEvenYears = age / 2;
    int numberOddYears = age / 2 + age % 2;
    float amountreceived = 0;
    for (int i = 1; i <= numberEvenYears; i++)
    {
        amountreceived += (10.00 * i) - 1;
    }

    return amountreceived + unitPriceOfToy * numberOddYears - washingMachinePrice;
}