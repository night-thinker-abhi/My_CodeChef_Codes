#include<bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{ll a,b,c,x,y;
	    cin>>a>>b>>c>>x>>y;
	    ll f=0;
	   
	    if((a<=x&&b<=y)||(a<=y&&b<=x)){
	    	if((x+y-a-b)==c){
	    		cout<<"YES"<<endl;
	    		continue;
	    	}
	    		
	    	
	    	       
	    }if(((a<=x&&c<=y)||(a<=y&&c<=x))){
	    	if((x+y-a-c)==b){
	    		cout<<"YES"<<endl;
	    		continue;
	    	}
	    	
	    }if(((c<=x&&b<=y)||(c<=y&&b<=x))){
	    	if((x+y-c-b)==a){
	    		cout<<"YES"<<endl;
	    		continue;
	    	}
	    	
	    }
		cout<<"NO"<<endl;
	}
	    
	     return 0;
	     
	   }