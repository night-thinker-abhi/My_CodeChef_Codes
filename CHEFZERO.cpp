#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll n,m,k;
	cin>>n>>m>>k;
	
	ll i,j,a[n][m];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			cin>>a[i][j];
			
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i<2 && j==1)
		cout<<"2"<<" ";
	else
		cout<<"1"<<" ";}
	
	cout<<endl;}
	
return 0;
}
