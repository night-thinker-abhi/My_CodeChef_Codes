#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ll n,i;
    cin>>n;
     
     if(n == 1)
       { cout<<"1"<<endl;
        cout<<"1"<<endl;}
    
     else{
        int m = n/2;
         for(i = 1; i < m; i++)
            {cout<<i+1<<" ";}
        
        cout<<"1 ";
        
        for(i = m + 1; i < n; i++)
            {cout<<i+1<<" ";}
        
        cout<<m + 1<<endl;
         
        cout<<n<<" ";
         
         for(i = 1; i < n; i++)
            {cout<<i<<" ";}
     }
     return 0;
}