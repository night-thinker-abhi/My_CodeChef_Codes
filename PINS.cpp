#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll T;
  cin>>T;

   while(T--)
   {
      ll N,P,i;
      cin>>N;

      P = N/2 + N % 2;
      N = N - P;
      
      P = 1;

      cout<<P<<" ";

     
      cout<<1;
      for( i = 0; i < N; i++)
         cout<<0;
      
      cout<<endl;
   }
   
   return 0;
   }