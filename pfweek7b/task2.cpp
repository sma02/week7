#include <iostream>
using namespace std;

void printFabonacciSeries(int number);

int main()
{
    int number;
    cout << "Enter the lenght  of Fibonacci series: ";
    cin >> number;
    printFabonacciSeries(number);
}
void printFabonacciSeries(int number)
{
    int n1 = 0;
    int n2 = 1;
    int temp;
    cout << n1;
    for (int i = 0; i < number - 1; i++)
    {
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        cout << "," << n1;
    }
}