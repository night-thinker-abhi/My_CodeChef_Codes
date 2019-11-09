#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,i;
		cin>>n;
		
		map<ll,ll>a;
		for(i=0;i<n;i++)
		{
			ll m;
			cin>>m;
			
			if(m<=n)
				a[m]+=1;
		}
		ll d=n-a.size();
		cout<<d<<endl;
		}
		
		return 0;
		
	
}