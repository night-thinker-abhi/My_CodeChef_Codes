#include<bits/stdc++.h>
#define ll long long
#define MAXN 50001
#define pb push_back
#define mp make_pair
using namespace std;

ll a[201][201];

pair<ll,ll> A(vector < pair<ll,ll> > v, ll ke, ll low, ll high) 
{
    ll l=low,h=high,midd ;
    
    while(l<h) 
    {
        midd=(l+h+1)/2 ;
        if(v[midd].first==ke)
            l=midd ;
        else
            h=midd-1 ;
    }
    if(v[l].first==ke)
        return mp(v[l].first,v[l].second);
}


void func(ll *t)
{
	if(*t){
		*t=0;
	}
	else
		*t=1;
}

ll chess(ll ia,ll ib, ll ja, ll jb, ll c)
{
	
	ll d,y,z,e=0;
	
	for(y=ia;y<=ib;y++)
	{
		d=c;
		for(z=ja;z<=jb;z++)
		{
			if(a[y][z]!=d)
				e++;
			
			func(&d);
		}
		
		func(&c);
	}
	
	return e;

}
ll board(ll ia,ll ib, ll ja, ll jb)
{
	 ll ptr=min(chess(ia,ib,ja,jb,1),chess(ia,ib,ja,jb,0));
	 return ptr;
}

int main()
{
	
		ios_base::sync_with_stdio(false);
        	cin.tie(NULL);
        
        	ll i,j,n,m,k,ib,jb;
		cin>>n>>m;
		
		for(i=0;i<201;i++)
		{
			for(j=0;j<201;j++)
				a[i][j]=-1;
			
		}
		
		for(i=1;i<=n;i++)
		{
			string str;
			cin>>str;
			for(j=1;j<=str.size();j++)
			{
				if(str[j-1]=='0')
					a[i][j]=0;
				else
					a[i][j]=1;
			}
		}
		
		ll b[n+1];
		for(i=0;i<=n;i++)
			b[i]=10000000;
		
	
		for(k=1;k<=n;k++)
		{
			ll y=1;
			for(ib=y+k-1;y<=n-k+1;y++,ib++)
			{
				ll z=1;
				for(jb=z+k-1;z<=m-k+1;z++,jb++)
					b[k]=min(b[k],board(y,ib,z,jb));
				
			}
		}
	
		vector<pair<ll,ll>>an;
		
		for(i=1;i<=n;i++)
			an.pb(mp(b[i],i));
		
		sort(an.begin(),an.end());
	
		ll maxi=b[n],fin[maxi];
		
		for(i=0,j=0;i<maxi;i++)
		{
			pair<ll,ll> a=A(an,i,j,an.size()-1);
			fin[i]=a.second;
			j=a.second;
		
		}
		
		ll q;
		cin>>q;
		
		while(q--)
		{
			ll c;
			cin>>c;
			if(c>=maxi)
				cout<<n<<endl;
			else{
				cout<<fin[c]<<endl;
			
		}
	}
	
return 0;
}  