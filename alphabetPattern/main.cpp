#include <iostream>

using namespace std;

int main()
{
    int rows,i,j;
    cout<<"Enter number of rows :--> ";
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        int al=65;
        for(j=1;j<=i;j++)
        {
            cout<<char(al)<<" ";
            al++;
        }
        cout<<endl;
    }
    return 0;
}
