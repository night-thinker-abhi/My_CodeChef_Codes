#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll p1,p2,k;
		cin>>p1>>p2>>k;
		
		ll s=p1+p2;
		
		if(s%(2*k)<k)
			cout<<"CHEF"<<endl;
			
		else
			cout<<"COOK"<<endl;
		
	}
	
	return 0;
}