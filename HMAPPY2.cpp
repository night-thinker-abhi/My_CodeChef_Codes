#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll count(ll a, ll b, ll m)
{
	if (a  % m == 0) 
        return (b / m) - (a / m) + 1; 
  
    return (b / m) - (a / m); 
}

ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 

ll lcm(ll a, ll b)  
 {  
    return (a*b)/gcd(a, b);  
 }  


int main()
{
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    
    ll t;
	cin>>t;
	
	while(t--)
	{
	
		ll n,a,b,k;
		cin>>n>>a>>b>>k;
	
		
		ll c=lcm(a,b);
		
		ll x= count(1,n,c);
		ll p= count(1,n,a);
		ll q= count(1,n,b);
		
		
		ll z=(p+q)-2*x;
		
		if(z<k)
			cout<<"Lose"<<endl;
			
		else
			cout<<"Win"<<endl;
		
	}
	
	return 0;
	
}
