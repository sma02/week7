
#include <iostream>
using namespace std;

void printPattern(int rows);
int main()
{
    int rows;
    cout << "enter number of rows: ";
    cin >> rows;
    printPattern(rows);
}
void printPattern(int rows)
{
    for (int i = 0; i <= rows / 2; i++)
    {
        for (int j = 0; j < rows / 2 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = rows / 2; i >= 0; i--)
    {
        for (int j = 0; j < rows / 2 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}