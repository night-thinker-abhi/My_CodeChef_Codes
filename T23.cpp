#include<bits/stdc++.h>
using namespace std;


int gcd(int x, int y)
{
    if(y==0)
      return x;
    
    return gcd(y,x%y);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,m,g=0;
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> m;
            g=gcd(g,m);
        }
        
        if(g==1)
          cout << "YES" <<endl;
        
        else
          cout << "NO" <<endl;;
    }
    return 0;
}