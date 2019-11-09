#include<bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int func(ld x)
{
    ld a=sqrt(x);
    ld b=a-floor(a);
    
    return(b==0);
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        ll arr[n],i,j,k;
        
        for(i=1;i<=n;i++)
            cin>>arr[i];
            
        for(j=0;j<q;j++)
        {
            ll l,r,c=0;
            cin>>l>>r;
            
            for(i=l;i<=r;i++)
            {
                ll d=arr[i];
                
                for(k=i;k<=r;k++)
                {
                    d=d&arr[k];
                    
                    if(func(d))
                        c++;
                }
            }
            cout<<c<<endl;
        }
        }
return 0;
        
        
    }
