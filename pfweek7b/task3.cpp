#include <iostream>
using namespace std;

int totalDigits(int number);

int main()
{
    cout << totalDigits(1234)<<endl;
    cout << totalDigits(123)<<endl;
    cout << totalDigits(21)<<endl;
}
int totalDigits(int number)
{
    int numberOfDigits = 0;
    while (number)
    {
        number = number / 10;
        numberOfDigits++;
    }
    return numberOfDigits;
}