Question- Bit++

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, ans=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string curr;
        cin >> curr;
        if(curr == "++X")
        ans += 1;
        else if(curr == "--X")
        ans-=1;
        else if(curr == "X++")
        ans += 1;
        else
        ans -= 1;
        curr.erase();
    }
    cout << ans <<endl;
}
