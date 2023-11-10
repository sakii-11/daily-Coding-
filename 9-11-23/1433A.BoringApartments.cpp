Question: 1433A.Boring Apartments

code:
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string c= to_string(n);
        char g= c[0];
        int k= g-'0';
        int ans = (k-1)*10;
        int h= c.length();
        int temp=0;
        for(int i=1; i<=h; i++)
        {
            temp += i;
        }
        cout << (ans+temp) <<endl;
    }
}
