#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll p,s;
	cin>>p>>s;
	
	ll i,j;
	vector<vector<pair<ll,ll>>>a;
	vector<pair<ll,ll>>b;
	
	ll S[s],N[s];
	
	for(i=0;i<p;i++)
	{
		for(j=0;j<s;j++)
			cin>>S[j];
		
		for(j=0;j<s;j++)
			cin>>N[j];
		
	vector<pair<ll,ll>>x;
	for(j=0;j<s;j++)
		x.push_back(make_pair(S[j],N[j]));
	
	a.push_back(x);
	
	}
	
	for(i=0;i<p;i++)
	{
		sort(a[i].begin(),a[i].end());
		ll cnt=0;
		
		for(j=0;j<s-1;j++)
		{
			if(a[i][j].second>a[i][j+1].second)
				cnt++;
		}
		b.push_back(make_pair(cnt,i+1));
	}
	
	sort(b.begin(),b.end());
	for(i=0;i<p;i++)
		cout<<b[i].second<<endl;


return 0;
}