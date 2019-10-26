#include<iostream>

using namespace std;

int main()
{
cout << "--THE FIBONACCI SEQUENCE--" << endl;
int x,y,i,j,z;
cout << "ENTER THE FIRST TWO NUMBERS OF YOUR FIBONACCI SEQUENCE" << endl;
cin >> x;
cin >> y;
cout << "ENTER THE LENGTH OF YOUR FIBONACCI SEQUENCE" << endl;
cin >> j;
cout << "Your Fibonacci Sequence is:" << endl;
cout << x << ",";
cout << y;
for(i=1;i<=j;i++)
{
    z=x+y;
    x=y;
    y=z;
if(i==j)
    {
    cout << "," << z;}
else
        {cout << "," << z;}
}
return 0;
}
