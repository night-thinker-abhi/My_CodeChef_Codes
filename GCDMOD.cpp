#include<bits/stdc++.h>
#define ll long long
#define M 1000000007

using namespace std;

ll mul(ll a, ll b, ll p)
{
    ll r = 0;
    a = a % p;
    while (b > 0)
    {
        
        if (b % 2 == 1)
            r = (r + a) % p;
 
        a = (a * 2) % p;
 
        
        b /= 2;
    }
 
    
    return r % p;
}

ll pow(ll a, ll b, ll p)
{
    ll r = 1;      
 
    a = a % p; 
 
    while (b > 0)
    {
        
        if (b & 1)
           r = mul(r, a, p) % p;
 
        
        b = b>>1; 
        a = mul(a, a, p) % p;
    }
    return r;
}

ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
 

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll a, b, n, x, y;
		cin >> a >> b >> n;
		
 		y = abs(a - b);
		if(!y){
			cout << (pow(a, n, M) + pow(b, n, M)) % M<< endl;
			continue;
		}
		x = pow(a, n, y) + pow(b, n, y);
		
		cout << gcd(x, y) % M<< endl;
	}
	return 0;
	}