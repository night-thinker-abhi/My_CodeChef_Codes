#include<bits/stdc++.h>
#define ll long long
#define s abs
using namespace std;

 int main(){
	ll t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<2<<endl; 
			continue;
			
		}
 		
 		float a = log2(n);
		ll b = ceil(a);
		ll c = floor(a);
 		ll d = (1<<b);
		ll e = (1<<c);
 		if(n-d==0 || n-e==0)
 		{ 
 			cout<<1<<endl; 
 			continue;
 			
 		}
		
		float f = log2(s(n-e));
 		ll g = ceil(log2(s(n-e)));
		ll h = floor(log2(s(n-e)));
 		ll i = (1<<g);
		ll j = (1<<h);
 		ll m = INT_MAX;
		if(e!=j) 
			m = min(m, s(n-(e+j)));
		if(e!=i) 
			m = min(m, s(n-(e+i)));
 		
 		m = min(d-n+1,m);
		cout<<(m)<<endl;
	}
	
	return 0;
} 