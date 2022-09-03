#include<iostream>
using namespace std;
void fact(int number){
    int fact=1;
    for(int i=number;i>=1;i--){
        fact=fact*i;
    }
    cout<<"Factorial of "<<number<<"is:-- > "<<fact<<endl;
}
int main(){
    int num1,num2;
    cout<<"Enter number:-->";
    cin>>num1;
    cout<<"Enter number:-->";
    cin>>num2;
    fact(num1);
    fact(num2);
    return 0;
}
