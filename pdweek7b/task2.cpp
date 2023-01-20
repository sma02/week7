#include <iostream>
using namespace std;

void printPattern(int rows);
int  main()
{
    int rows;
    cout<<"enter number of rows: ";
    cin>>rows;
    printPattern(rows);
}
void printPattern(int rows)
{
    for(int i=rows;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}