#include <iostream>

using namespace std;

int main()
{
    for(int i=65;i<=150;i++)
    {
        cout<<char(i)<<" = " << i<<" , ";
    }
    cout<<"\b\b.";
    return 0;
}
