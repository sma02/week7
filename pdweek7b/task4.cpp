
#include <iostream>
using namespace std;

void amplify(int factor);

int main()

{
    int factor;
    cout << "Enter the number: ";
    cin >> factor;
    amplify(factor);
}
void amplify(int factor)
{
    cout << 1;
    for (int i = 2; i <= factor; i++)
    {
        if (i % 4)
        {
            cout << "," << i;
        }
        else
        {
            cout << "," << i * 10;
        }
    }
}