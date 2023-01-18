#include <iostream>
using namespace std;

int frequencyChecker(int number, int digit);

int main()
{
    int number, digit;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;
    cout << "Number of digits: " << frequencyChecker(number, digit) << endl;
}

int frequencyChecker(int number, int digit)
{
    int numberOfDigits = 0;
    while (number)
    {
        if (number % 10 == digit)
        {
            numberOfDigits++;
        }
        number = number / 10;
    }
    return numberOfDigits;
};