Question :339A - Helpful Maths
code:
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s ;
    cin>> s;
    int arr[1001];
    int ind=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!='+')
        {
         arr[ind++] = s[i]-'0';
        }
        else
        continue;
    }
    sort(arr,arr+ind);
    for(int i=0; i<=ind; i++)
    {
        cout << arr[i];
        if(i==ind-1)
        break;
        cout << "+";
    }
    return 0;
}
