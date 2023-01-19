#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

int main()
{
    float money;
    int year;
    float result;
    cout << "Enter the amount of money you enherited: ";
    cin >> money;
    cout << "Enter year: ";
    cin >> year;
    result = calculatePrice(money, year);
    if (result < -1)
    {
        result *= -1;
        cout << "He will need " << result << " dollars to servive.";
    }
    else
    {
        cout << "Yes! He will life a carefree life and will have " << result << " dollars left.";
    }
}
float calculatePrice(float money, int year)
{
    float sum = 0;
    int age = 18;
    for (int i = 1800; i <= year; i++)
    {
        if (i % 2 == 0)
        {
            sum += 12000;
        }
        else
        {
            sum += 12000 + 50 * age;
        }
        age++;
    }
    return money - sum;
}