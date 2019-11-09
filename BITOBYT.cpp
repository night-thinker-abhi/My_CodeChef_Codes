#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);

  ll t;
  cin>>t;

  while(t--)
 {
    ll n,i;
    cin>>n;
   // cout<<n/26<<" d";
   ll f=1;
    for( i=0;i<=n/26;)
     {
        if(0<n && n<=2)
            {
            	cout<<1<<" "<<0<<" "<<0<<endl;
              break;
            }
        else if(2<n && n<=10)
            {
            	cout<<0<<" "<<1<<" " <<0<<endl;
             break;

            }
        else if(10<n&& n<=26)
            {
            	cout<<0<<" "<<0<<" "<<1<<endl;;
                 break;

            }
        ++i;
       //cout<<i<<" ";
        f=f<<1;
        //cout<<f<<"  f ";

        if(26*i<n && n<=26*i+2)
            {
            	cout<<f<<" "<<0<<" "<<0<<endl;
            break;

            }

        else if(26*i+2<n && n<=26*i+10)
     {
     	cout<<0<<" "<<f<<" "<<0<<endl;;
       break;

     }

    else if(26*i+10<n && n<=26*i+26)
      {
      	cout<<0<<" "<<0<<" "<<f<<endl;
        break;

      }


     }}
 return 0;
}