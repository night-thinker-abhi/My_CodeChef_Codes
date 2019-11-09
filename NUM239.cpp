#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    
    int t;
    cin>>t;
    while(t--){
        
        ll l,r,i,c=0;
        cin>>l>>r;
        
        for(i=l;i<=r;i++){
            if(i%10==2 || i%10==3 || i%10==9)
                ++c;
            
        }
        cout<<c<<endl;
    }
    return 0;
}