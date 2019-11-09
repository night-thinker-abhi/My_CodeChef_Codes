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
		string a,b;
		cin>>a>>b;
		
		ll m,n;
		 m = (a.length())+1;
		 n = (b.length())+1;
	
		
		
		ll c[n+1][m+1]={0};
		
		ll i,j;
		
		
		
		
		for(i=0;i<m-1;i++)
		{
			if(a[i]=='1')
				c[0][i+1]=1;
			
			else
				c[0][i+1]=0;
		}
		
		
		
		for(i=0;i<n-1;i++)
		{
			if(b[i]=='1')
				c[i+1][0]=1;
			
			else
				c[i+1][0]=0;
		}
		
		for(i=1;i<n;i++)
		{
			for(j=1;j<m;j++)
				c[i][j] = !(c[i-1][j]) || !(c[i][j-1]);
		}

                ll q;
		cin>>q;
		while(q--){
		
		ll x,y;
		cin>>x>>y;
		
		if(c[x][y])
			cout<<"1";
		else
			cout<<"0";
	}
		cout<<endl;
	}
return 0;
}