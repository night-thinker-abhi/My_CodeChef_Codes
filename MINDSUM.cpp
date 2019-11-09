#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll Sum(ll n) 
{  
   ll s = 0; 
   while (n != 0) 
   { 
       s+= n % 10; 
       n /=10; 
   } 
   return s; 
} 

ll unit(ll n) 
{ 
    if (n == 0)  
       return 0; 
    return (n % 9 == 0) ? 9 : (n % 9); 
} 

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    
    while(t--)
    {
    	ll n,d,i;
    	cin>>n>>d;
    	
    	ll arr[10]={0};
    	
    	if(n==1)
    	{
    		cout<<"1 0"<<endl;
    		continue;
    	}
    	
    	ll a=unit(n);
    	ll arr1[10000];
    	ll M=100000000000;
    	
    	while(1)
    	{
    		arr[a]+=1;
    		if(a<M)
    			M=a;
    		
    		if(arr[a]>1)
    		{
    			cout<<M<<" ";
    			break;
    		}
    		
    		a=unit(a+d);
    	}
    	
    	if(M==n)
    	{
    		cout<<"0"<<endl;
    		continue;
    	}
    	
    	arr1[0]=n;
    	ll count=0;
    	
    	
    	
    	for(i=0;;i++)
    	{
    		arr1[2*i+1]=arr1[i]+d;
    		arr1[2*i+2]=Sum(arr1[i]);
    		
    		if(arr1[2*i+1]==M||arr1[2*i+2]==M)
    		{
    			if(arr1[2*i+1]==M)
    				count=log2(2*i+1);
    				
    			else
    				count=log2(2*i+2);
    			break;
    		}
    	}
    	
    	cout<<count<<endl;
    	
  	}
  return 0;
  
  }
    