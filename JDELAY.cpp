#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,r=0;
		cin>>n;
	
	while(n--)
	{
		ll a,b;
		cin>>a>>b;
		
		if((b-a)>5)
			r++;
	}
	
	cout<<r<<endl;
	}
	return 0;
}