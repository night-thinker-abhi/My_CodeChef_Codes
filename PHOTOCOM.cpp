#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll hcf(ll r,ll s)
    {
        if(s==0)
            return r;
        else
            return hcf(s,r%s);
    }
    
ll lcm(ll r, ll s) 
{ 
    return (r*s)/hcf(r, s); 
} 

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;

while(t--)
{
	ll a1,a2,b1,b2,i,j;
    		string a,b;
    		cin>>a1>>b1;
    		ll arr[a1][b1];
    		cin>>a;
    		cin>>a2>>b2;
    		ll arr1[a2][b2];
    		cin>>b;
    		for(i=1;i<=a1;i++){
    			for(j=1;j<=b1;j++){
    				if(a[(i-1)*b1+j-1]=='1'){
    					arr[i-1][j-1]=1;
    				}else{
    					arr[i-1][j-1]=0;
    				}
    			}
    		}
    		
    		
    		
    		for(i=1;i<=a2;i++){
    			for(j=1;j<=b2;j++){
    				if(b[(i-1)*b2+j-1]=='1'){
    				    arr1[i-1][j-1]=1;
    				}else{
    					arr1[i-1][j-1]=0;
    				}
    			}
    		}
    		
    		
    		ll h=lcm(a1,a2);
    		ll w=lcm(b1,b2);
    		ll u1,u2, res=0;;
    		
    		ll x[h][w];
    		ll y[h][w];
    		u1=h/a1;
    		u2=w/b1;
    		
    		for(i=0;i<a1;i++){
    			for(j=0;j<b1;j++){
    				ll p,q,y1,y2;
    				for(p=(i*u1),y1=0;y1<u1;y1++,p++){
    					for(q=(j*u2),y2=0;y2<u2;y2++,q++){
    						x[p][q]=arr[i][j];
    					}
    				}
    			}
    		}
    		
    		
    	u1=h/a2;
    	u2=w/b2;
    		for(i=0;i<a2;i++){
    			for(j=0;j<b2;j++){
    				ll p,q,y1,y2;
    				for(p=(i*u1),y1=0;y1<u1;y1++,p++){
    					for(q=(j*u2),y2=0;y2<u2;y2++,q++){
    						y[p][q]=arr1[i][j];
    					}
    				}
    			}
    		}
    		
    		
    		for(i=0;i<h;i++){
    			for(j=0;j<w;j++){
    				if(x[i][j]==y[i][j]){
    					res++;
    				}
    			}
    		}
    		cout<<res<<endl;
    		
}
    	
     
     
    	return 0;
    }