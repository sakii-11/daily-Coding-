Question :702A - Maximum Increase

code :
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count =0, maxi=0;
    int a,b=0;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        if(b<a)
        {
            count++;
            maxi= max(maxi, count);
        }
        else
        count =1;
        b=a;
    }
    cout << maxi << endl;
}
