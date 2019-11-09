#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int t;
   cin>>t;
	
	while(t--)
	{
	    int A[10000],i,n,a,b;
	    float prob,x=0.0,y=0.0;
	    
	    cin>>n>>a>>b;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	   
	   for(i=0;i<n;i++)
	    {
	        if(A[i]==a)
	        {
	            x++;
	        }
	    
	        if(A[i]==b)
	        {
	            y++;
	        }
	    }
	    
            cout<<fixed<<setprecision(10);
	    prob = (x/n)*(y/n);
	    
	    cout<<prob<<endl;
	}
	
  return 0;
}