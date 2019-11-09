#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n,x,s,a,b,c;
		cin>>n>>x>>s;
		
		c = x;
		
		while(s--)
		{
			cin>>a>>b;
			
			if (x == a)
                c = b;
            
            else if (x == b)
                c = a;

            x = c;
		}
		
		cout<<c<<endl;
		
	}

return 0;
}