#include <iostream>

using namespace std;

int main()
{
    long num,i;
    cout<<"Enter any number which factor you want to show :--> ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            cout<<i<<" , ";
        }
    }
    cout<<"\b\b.";
    return 0;
}
