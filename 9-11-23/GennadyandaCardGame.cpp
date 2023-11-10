Question : 1097A - Gennady and a Card Game
Code:
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count=0;
    string curr;
    for(int i=0; i<5; i++)
    {
        cin >> curr;
        if(curr[0]==a[0])
        count++;
        if(curr[1]==a[1])
        count++;
        curr.erase();
    }
    if(count>0)
    cout << "YES" << endl;
    else
    cout << "NO"<< endl;

}
