#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll N,i,K;
		cin>>N>>K;
		
		for(i=0;i<N;i++)
		{
			ll M;
			cin>>M;
			
			if(M>K)
				cout<<"0";
				
			else
			{
				K=K-M;
				cout<<"1";
			}}
			
			cout<<endl;
		}
		
		
		return 0;
		
	
}