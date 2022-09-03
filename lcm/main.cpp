#include <iostream>

using namespace std;

int main()
{
    int num1,num2,max,flag=1;
    cout<<"Enter first number :-->";
    cin>>num1;
    cout<<"Enter second number:--> ";
    cin>>num2;
   max=(num1>num2)?num1:num2;
   while(flag)
   {
       if(max%num1==0 && max%num2==0)
       {
           cout<<max;
           break;
       }
       ++max;
   }
    return 0;
}
