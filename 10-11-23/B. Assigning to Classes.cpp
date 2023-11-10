Question :B. Assigning to Classes
code:
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<long long int> v;
    for(int i=0; i<(2*n); i++)
    {
      int a;
      cin >>a;
      v.push_back(a);
    }
    sort(v.begin(), v.end());
    int ans= abs(v[n-1]- v[n]);
    cout <<ans <<endl;

  }
}
