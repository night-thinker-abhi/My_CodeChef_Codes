#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin>>t;
  
  while(t--)
  {
    long long int a,b,n;
    cin>>a>>b>>n;
    
    if(n%2==0)
         { 
             if(abs(a)>abs(b))
             cout<<"1"<<endl;
             
            else if(abs(a)<abs(b))
             cout<<"2"<<endl;
               
            else
               cout<<"0"<<endl;
               
         }
       
    else if(n%2!=0)
         { 
         	if(a> b)
               cout<<"1"<<endl;
               
            else if(a< b)
               cout<<"2"<<endl;
       
       
            
               
            else
               cout<<"0"<<endl;
         	
         	
         }
       
   
    
   }
   
   return 0;
   
  }