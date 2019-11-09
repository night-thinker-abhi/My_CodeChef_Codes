#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string str;
        cin>>str;

        int i,j,s= 0;
        for(i=0,j=1;i<=(n-k+1-2);i++,j++)
        {
            
            int a =i;
            int b =j;
            int p;
            
            for( p=0;p<k;p++,a++,b++)
            {
                if(str[a] != str[b])
                     s++;
                
            }
        }
        cout<<s<<endl;
    }


    return 0;
}