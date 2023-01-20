#include <iostream>
using namespace std;

int main()
{
int n;
float count1=0,count2=0,count3=0;
int number;
cout<<"Enter number of  integers: ";
cin>>n;
for(int i=0;i<n;i++)
{
 cout<<"Enter a integer(0-1000): ";
 cin>>number;
 if(number%4==0)
 {
    count3++;
 } 
 if(number%3==0)
 {
    count2++;
 }
if(number%2==0)
 {
    count1++;
 }
}
cout<<"p1: "<<count1/n*100<<endl;
cout<<"p2: "<<count2/n*100<<endl;
cout<<"p3: "<<count3/n*100<<endl;
}