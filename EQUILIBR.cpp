#include<bits/stdc++.h>
#define M 1000000007
#define ll long long
#define _USE_MATH_DEFINES

using namespace std;

int power(int a,int i)
{
    int b=1;
    
     while(i)
    {
        if(i&1) 
           b=1ll*b*a % M;
        
         a = 1ll*a*a % M;
         i>>=1;
    }
   return b;
}

 int main()
 
{    ll n,k,c;
     cin>>n>>k;
    
    c = power(2,n-1);
    c = power(c,M-2);
    c = 1ll*n*c % M;
    c = (1+M-c)%M;
    
    cout<<c<<endl;

    return 0;
}