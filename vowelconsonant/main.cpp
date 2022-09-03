#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any character which you want to check vowel or consonant :--> ";
    cin>>ch;
    if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"This is a vowel.";
    }
    else{
        cout<<"This is a consonant";
    }
    return 0;
}
