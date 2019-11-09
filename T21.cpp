#include<bits/stdc++.h>
#define ll long long 
using namespace std;
 
int div(string st)
{

    ll s = st.length();
    ll i,sum = 0;
    for ( i=0; i<s; i++){
        sum += st[i]-'0';
    }
    return (sum % 3);
}
 
int main()
{
    ll t,x,y,z;
    cin>>t;
    
    while(t--){
    string m,n;
    cin>>m>>n;
   
    x = div(m);
    y = div(n);
    z = (x*y)%3;
    
    cout<<z<<endl;
}
    return 0;
}