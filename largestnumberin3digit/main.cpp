#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout<<"Enter first , second and Third number :--> ";
    cin>>num1>>num2>>num3;
    if(num1>=num2 && num1>=num3)
    {
        cout<<num1<<" is largest number";
    }
    else if(num2>=num3 && num2>=num1)
    {
        cout<<num2<<" is largest number";
    }
    else {
        cout<<num3<<" is largest number";
    }
    return 0;
}
