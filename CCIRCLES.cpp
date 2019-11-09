#include<bits/stdc++.h>
#define ll long long
#define db double
#define M 50001
using namespace std;

ll a[10000000] = {0};
ll b[10000000] = {0};


void func(ll p, ll q, ll r, ll t, 
                     ll v, ll w) 
{ 
    if (b[p] != 0) 
    {  
        a[p] += (r-q+1)*b[p]; 
        if (q != r) 
        {
            b[p*2 + 1] = b[p*2 + 1]+b[p]; 
            b[p*2 + 2] = b[p*2 + 2]+b[p]; 
        }
        b[p] = 0; 
    }  
    if (q>r || q>v || r<t) 
        return ; 
    if (q>=t && r<=v) 
    { 
        a[p] += (r-q+1)*w;
        if (q != r) 
        { 
            b[p*2 + 1] = b[p*2 + 1]+w; 
            b[p*2 + 2] =b[p*2 + 2] + w; 
        } 
        return; 
    } 
    
    ll m = (q+r)/2; 
    func(p*2+1, q, m, t, v, w); 
    func(p*2+2, m+1, r, t, v, w); 
    a[p] = a[p*2+1] + a[p*2+2]; 
} 
void func1(ll n, ll t, ll v, ll w) 
{ 
   func(0, 0, n-1, t, v, w); 
} 
ll func2(ll q, ll r, ll x, ll y, ll p) 
{ 
    if (b[p]!= 0) 
    {  
        a[p] += (r-q+1)*b[p]; 
        if (q != r) 
        { 
            b[p*2+1] += b[p]; 
            b[p*2+2] += b[p]; 
        } 
        b[p] = 0; 
    } 
    if (q>r || q>y || r<x) 
        return 0; 
    if (q>=x && r<=y) 
        return a[p]; 
    ll m = (q + r)/2; 
    return func2(q, m, x, y, 2*p+1) + func2(m+1, r, x, y, 2*p+2); 
} 
ll func3(ll n, ll x, ll y) 
{ 
    if (x < 0 || y > n-1 || x > y) 
    { 
        
        return -1; 
    } 
  
    return func2(0, n-1, x, y, 0); 
} 
void func4(ll array[], ll q, ll r, ll p) 
{ 
    if (q > r) 
        return ; 
    if (q == r) 
    { 
        a[p] = array[q]; 
        return; 
    } 
    
    ll m = (q+r)/2; 
    func4(array, q, m, p*2+1); 
    func4(array, m+1, r, p*2+2); 
  
    a[p] = a[p*2 + 1] + a[p*2 + 2]; 
} 

void func5(ll array[], ll n) 
{  
    func4(array, 0, n-1, 0); 
}


db ff(ll x1, ll y1, ll x2, ll y2){
    return sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
}

db ff1(ll x1,ll y1,ll r1, ll x2, ll y2, ll r2){
    db d=ff(x1,y1,x2,y2);
    
    if(d<=abs(r1+r2)&&d>=abs(r1-r2))
        return 0;
    else if(d<abs(r1-r2))
        return r1>r2?(r1-(d+r2)):(r2-(d+r1));
    
    return (d-(r1+r2));
}

db ff2(ll x1,ll y1,ll r1, ll x2, ll y2, ll r2){
    db d=ff(x1,y1,x2,y2);
    
    if(d<abs(r1-r2))
        return r1+r2+d;
    else if(d==abs(r1-r2))
        return r1>r2?2*r1:2*r2;
    else if(d==r1+r2)
        return 2*(r1+r2);
    else
        return d+r1+r2;
        
}

int main(){
	
	ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        ll n,q,i,j,x1,x2, n1=1000005,array[n1]={0};
        cin>>n>>q;
        ll c1[n+1],c2[n+1],c3[n+1],c4[q+1];
        for(i=1;i<=n;i++)
            cin>>c1[i]>>c2[i]>>c3[i];
        
        for(i=1;i<=q;i++)
            cin>>c4[i];
        
        
        func5(array,n1);
        
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                 x1=ceil(ff1(c1[i],c2[i],c3[i],c1[j],c2[j],c3[j]));
                 x2=floor(ff2(c1[i],c2[i],c3[i],c1[j],c2[j],c3[j]));
                func1(n1, x1, x2, 1);
            }
        }
        for(i=1;i<=q;i++)
            cout<<func3(n1,c4[i],c4[i])<<endl;
        
    
    return 0;
}  