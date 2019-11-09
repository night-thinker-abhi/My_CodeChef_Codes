#include <bits/stdc++.h>
#define M 1000000
#define ll long long
using namespace std;
 
int PrimeSum(int n)
{
    ll s = 0;
 
    for (int i = 2; i <= n; i++) {
 
        if (n % i == 0) {
 
            bool isPrime = true;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
 
            if (isPrime) 
                s+= i;
            
        }
    }
 
    return s;
}
 

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,arr[M],i,j,c=0;
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>arr[i];

        for(i=0;i<n;i++)
            for(j=0;j<n; j++)
            {
                if((i!=j) && (arr[j]%arr[i]==0) && (PrimeSum(arr[j])%PrimeSum(arr[i])) == 0)
                    c++;
            }

            cout<<c<<endl;
            

    }
    return 0;
}