Question: 1373A - Donut Shops

code :
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int a, b, c;
    while(t--)
    {
        cin >> a >> b >> c;
        long long int ans1= -1, ans2=-1;
        if(a*b >c)
        {
            ans2= b;
        }
        if(a<c)
        {
            ans1= 1;
        }
        cout << ans1 << " " << ans2 << endl;
    }
}
