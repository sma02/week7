#include <iostream>
using namespace std;

void printPercentage(int number);

int main()
{
    int n;
    cout << "Enter number of values: ";
    cin >> n;
    printPercentage(n);
}
void printPercentage(int number)
{
    int p1=0;
    int p2=0;
    int p3=0;
    int p4=0;
    int p5=0;
    int marks;

    for (int i = 0; i < number; i++)
    {
        cout << "Enter number: ";
        cin >> marks;
        if (marks < 200)
        {
            p1++;
        }
        else if (marks >= 200 && marks <= 399)
        {
            p2++;
        }
        else if (marks >= 400 && marks <= 599)
        {
            p3++;
        }
        else if (marks >= 600 && marks <= 799)
        {
            p4++;
        }
        else
        {
            p5++;
        }
    }
    cout<<"p1: "<<(p1*100)/number<<endl;
    cout<<"p2: "<<(p2*100)/number<<endl;
    cout<<"p3: "<<(p3*100)/number<<endl;
    cout<<"p4: "<<(p4*100)/number<<endl;
    cout<<"p5: "<<(p5*100)/number<<endl;
}