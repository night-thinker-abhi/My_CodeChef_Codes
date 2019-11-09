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
		ll n,m,i,p;
		cin>>n>>m;
		map<ll,ll> mp;
	
		while(n--)
		{
			ll l,r;
			cin>>l>>r;
			mp[l]=r;
		}
		
		while(m--)
		{
		
			ll p;
			cin>>p;
			ll f=0;
			ll q=0;
			
			for(auto n=mp.begin();n!=mp.end();n++)
			{
				if(n->first==p)
				{
					cout<<"0"<<endl;
					f=1;
					break;
					
				}
				
				else if(n->first>p)
				{
					f=1;
					cout<<n->first-p<<endl;
					break;
				}
				
				else if(n->first<p)
				{
					if(n->second>p)
					{
						f=1;
						cout<<"0"<<endl;
						break;
					}
				}
				if(n->second>q)
				q=n->second;
			}
			if(f==0 && q<p)
				cout<<"-1"<<endl;}
	}
				
		return 0;
		}
		