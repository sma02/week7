#include <iostream>
using namespace std;

int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2);

int main()
{
    cout << calculateLCM(14,35);
}

int calculateGCD(int number1, int number2)
{
    int smallerNumber = 0;
    if (number1 < number2)
    {
        smallerNumber = number1;
    }
    else
    {
        smallerNumber = number2;
    }
    for (int i = smallerNumber; i > 0; i--)
    {
        if ((number1 % i == 0) && (number2 % i == 0))
        {
            return i;
        }
    }
    return 0;
}
int calculateLCM(int number1, int number2)
{
    return (number1 * number2) / calculateGCD(number1, number2);
}