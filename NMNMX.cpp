#include<bits/stdc++.h>
#define ll long long
#define _USE_MATH_DEFINES_
ll N,t,k;
ll a[5000],subs[5000][5000];

using namespace std;
const ll M= 1000000007;

int expo(int a, int i)
{
	int b=1;
    while(i)
    {
        if(i&1) b=1LL*b*a%M;
        a=1LL*a*a%M;
        i>>=1;
    }
    return b;
}

ll comb(int N, int k, ll M) {
	subs[0][0] = subs[1][0] = subs[1][1] = 1LL;
    for (int i = 2; i <= N; i++) {
      subs[i][0] = 1LL;
      for (int j = 1; j <= i; j++)
        subs[i][j] = (subs[i-1][j] + subs[i-1][j-1]) % M;
    }
  
  return subs[N][k] % M;
}

int main() {
  cin>>t;
  while (t--) {
    cin>>N>>k;
    for (int i = 0; i < N; i++)
    cin>>a[i];
    sort(a, a + N);
    
    int c,min,max,d,tot;
    ll res=1LL;
    c = comb(N - 1, k - 1, M - 1);
    for (int i = 0; i < N; i++) {
      min = comb(i, k - 1, M - 1);
      max = comb(N - i - 1, k - 1, M - 1);
      tot = (((c - min - max) % (M - 1)) + (M - 1)) % (M - 1);
      res = (res * expo(a[i],tot)) % M;
    }
    
    d=res%M;
    cout<<d<<endl;
  }
  
  return 0;
}
    
