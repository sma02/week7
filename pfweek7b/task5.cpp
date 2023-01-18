#include <iostream>
using namespace std;

int digitSum(int number);

int main()
{
    cout << digitSum(12345) << endl;
    cout << digitSum(123) << endl;
    cout << digitSum(12) << endl;
}
int digitSum(int number)
{
    int sum = 0;
    while (number)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}