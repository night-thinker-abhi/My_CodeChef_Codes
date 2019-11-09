#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin>>t;
      while(t--) {
	     
	     int n,m,a,i,k,b=0;
          cin>>n>>m;
   
    for ( i = 0; i < n; i++) {
      cin>>a;
      if(a % m == 0)
         b++;
       
   }
     k= 1<<b;
    cout<<k-1<<endl;
  }
  return 0;
	
} 