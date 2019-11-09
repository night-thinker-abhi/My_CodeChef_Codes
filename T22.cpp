#include<bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(int n){
    
    if (n <= 1)
        return false;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
          return false;
        
    }
    return true;
}

int main()
{
    ll t,n,a,i,m, flag;
    
    cin>>t;
    
    while(t--){
        
        cin>>n;
        m = -1;
        flag = 0;
        
        for( i=0;i<n;i++){
            cin>>a;   
            
            if(a==1) 
              flag=1;
            
            else if(isPrime(a))
            {
                
            if(m ==-1 || a<m)
               m = a;  
                
            }

        }
           ll z= flag*m;
        
        if(flag==1 && m>1) 
           cout<<z<<endl;
        
        else 
          cout<<-1<<endl;
    }
    
    return 0;
    
    
}
