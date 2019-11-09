#include<bits/stdc++.h>
#define ll long long
using namespace std;

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
		
		ll a[n],a1[n],i,p=0;
		
		for(i=1;i<=n;i++)
			cin>>a[i];
			
		for(i=1;i<=n;i++)
		{	cin>>a1[i];
		if(a[i]==a1[i])
			p++;}
			
		while(q--)
		{
			ll x,y,z;
			cin>>x>>y>>z;
			
			ll l = x^p;
			ll  r= y^p;
			ll c=z^p;
			
			
			ll p1=0;
			for(i=1;i<=n;i++)
			{
				if(i<l || i>r)
				{
					if(a[i]==a1[i])
						p1++;
				}
				
				else
				{	
					a[i]=c;
					if(a1[i]==c)
						p1++;
				}
			}
			
			cout<<p1<<endl;
			p=p1;
		}
	}
	return 0;
}
