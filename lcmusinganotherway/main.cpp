#include <iostream>

using namespace std;

int main()
{
    int num1,num2,temp;
    cout<<"Enter first number:--> ";
    cin>>num1;
    cout<<"Enter second numbers:--> ";
    cin>>num2;
    int a=num1;
    int b=num2;
  while(num2!=0)
  {
      temp=num2;
      num2=num1%num2;
      num1=temp;
  }
  int gcd=num1;
  int lcm=(a*b)/gcd;
  cout<<lcm;
    return 0;
}
