#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{ 
		ll n,m,i,j,f=0,w=0;
		cin>>n>>m;
		
		for(j=0;j<n;j++)
		{
		string str1,str2;
		
		cin>>str1>>str2;
		int count=0;
		if(f==1)
		continue;
		
		for(i=0;i<m;i++)
		{
		if( str2[i]=='1')
		{
		count++;
		//cout<<count<<" ";
			
		}
		  
		}
		
			
			
		if(str1[0]=='w' && count==m)
			w++;
			
		else if(str1[0]=='c'&& count!=m)
			f=1;
		
		
	}
	if(f==1)
	cout<<"INVALID\n";
	else if(w>0)
	cout<<"WEAK\n";
	else
	cout<<"FINE\n";
		
	}
return 0;
}