Question:	476A - Dreamoon and Stairs
code:
#include<iostream>
#include<string>
using namespace std;

int main()
{
  int n,m;
  cin >> n >> m;
  if(n<m)
  {
    cout << -1 << "\n";
    return 0;
  }
  if(n==m)
  {
    cout << n << "\n";
    return 0;
  }
  int ans=0;
  if(n%2!=0)
    ans= (n/2)+1;
  else
    ans= n/2;
  if(ans%m ==0)
  { cout << ans << "\n";
    return 0;
  }
  else
  {
    while(ans%m!=0)
    {
      ans++;
    }
  }
  cout << ans << "\n";
}
