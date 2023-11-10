Question:	492A - Vanya and Cubes
Code:
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int temp;
    cin >> temp;
    int n= temp ;
    int i =1 , lev= 1;
    while(n>=i)
    {
        n-=i;
        lev++;
        i+=lev;
    }
    
    cout << lev-1 << endl;
    //cout << n << endl;
    return 0;
}
