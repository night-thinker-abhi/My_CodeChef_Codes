#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main()
{
    ll t;
    cin>>t;
    
    while(t--)
    {
        ll n,m,x,y;
        cin>>n>>m>>x>>y;
        n--;m--;
        
        	ll a =n%x;
		ll b =m%y;
		ll c =(n-1)%x;
		ll d =(m-1)%y;
		
		if(n==0||m==0)
		{
			if(a==0 && b==0)
			    cout<<"Chefirnemo"<<endl;
 			
			else 
				cout<<"Pofik"<<endl;	
		}
		
		else if(n>0 && m>0)
		{
			if(a==0 && b==0)
			    cout<<"Chefirnemo"<<endl;
 				
			else if(c==0 && d==0)
			    cout<<"Chefirnemo"<<endl;
 				
			else
				cout<<"Pofik"<<endl;
		}
	}
return 0;
 } 