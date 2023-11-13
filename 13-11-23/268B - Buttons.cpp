Question: 268B - Buttons
Cdoe:
#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int ans=0;
  for(int i=0; i<n; i++)
  {
    ans+= (i+1)*(n-i)-i;
  }
  cout << ans<< endl;
}
