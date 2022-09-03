#include <iostream>

using namespace std;

int main()
{
    int num1,num2,hcf,temp;
    cout<<"Enter first number :--> ";
    cin>>num1;
    cout<<"Enter second number :--> ";
    cin>>num2;
if(num2>num1)
{
    temp=num2;
    num2=num1;
    num1=temp;
}
for (int i=1;i<=num2;i++)
{
    if(num1%i==0 && num2%i==0 )
    {
        hcf=i;
    }
}
cout<<hcf;

    return 0;
}
