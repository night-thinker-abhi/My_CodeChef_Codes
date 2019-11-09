#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll xo(ll a[], ll n, ll x)
{
  ll i,r=0; 
  unordered_map<ll,ll> m;
  for(i=0;i<n;i++)
  {
    if (m.find(x^a[i]) != m.end())
     r += m[x^a[i]];
     
    m[a[i]]++;
  }
  return r;
}

int main() 
{
  ll t;
  cin >> t;
  
  while(t--)
  {
    ll n;
    cin >> n;
    ll a[n],ev=0,od=0,p,i,res,res1; 
    
    for(i=0;i<n;i++)
    {
      cin>>p;
      if(p%2==0)
        ev++;
      else
        od++;
      a[i]=p;
    }
    
     res=(od*(od-1))/2 + (ev*(ev-1))/2;
     res1 =res - xo(a,n,2) - xo(a,n,0);
    
    if(res1<0)
      res1=0;
    
    cout <<res1<<endl; 
  }
 return 0;
}