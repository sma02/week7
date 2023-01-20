#include <iostream>
using namespace std;

int triangle(int order);
int main()
{
    int order;
    cout << "Enter order of triangle: ";
    cin >> order;
    cout << triangle(order);
}
int triangle(int order)
{
    int sum = 0;
    for (int i = 1; i <= order; i++)
    {
        sum += i;
    }
    return sum;
}