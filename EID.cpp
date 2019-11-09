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
		
		ll a[n];
		
		for(i=0;i<n;i++)
			cin>>a[i];
			
		sort(a,a+n);
		ll p=10000000,flag=1;
		for(i=1;i<n;i++){
			ll q=abs(a[i]-a[i-1]);
			if(q==0){
				flag=0;
				break;
			}
			if(q<p){
				p=q;
			}
		}
		if(flag==0){
			cout<<0<<endl;
		}else{
			cout<<p<<endl;
		}
			
		
	}
}