Question: 1426A - Floor Number
code:
#include<iostream>
#include<string>
#include <cmath>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b;
        cin >> a >> b;
        int i =2, ans=1;
        while(i<a)
        {
            i += b;
            ans++;
        }
        cout << ans << endl;

    }
}
