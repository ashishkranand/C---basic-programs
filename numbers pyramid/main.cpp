#include <iostream>
using namespace std;

int main()
{
    int space, rows,s=1;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << s<<" ";
            ++k;
            s++;
        }
        cout << endl;
    }
    return 0;
}
