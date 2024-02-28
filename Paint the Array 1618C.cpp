///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{	

	faster;

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

	int test;
	cin>>test;

	while(test--)
	{
		ll n,i;
		cin>>n;

		ll ar[n+2];

		vl v1,v2;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];

			if(i%2==0)
			{
				v1.PB(ar[i]);
			}
			else 
			{
				v2.PB(ar[i]);
			}
		}

		ll g1=v1[0],g2=v2[0];

		for(i=1;i<sz(v1);i++)
		{
			g1=gcd(g1,v1[i]);
		}

		for(i=1;i<sz(v2);i++)
		{
			g2=gcd(g2,v2[i]);
		}
		//cout<<"g1 = "<<g1<<"   g2 = "<<g2<<endl;
		ll ans=0;

		if(g1==g2)
		{
			cout<<ans<<endl;
		}
		else
		{

			if(g1==1 or g2==1)
			{
				if(g1==1)
				{
					ans=g2;
					for(i=0;i<sz(v1);i++)
					{
						if(v1[i]%g2==0)
						{
							ans=0;
							break;
						}
					}
				}
				else
				{
					ans=g1;
					for(i=0;i<sz(v2);i++)
					{
						if(v2[i]%g1==0)
						{
							ans=0;
							break;
						}
					}
				}
			}
			else
			{
				ans=g1;
				for(i=0;i<sz(v2);i++)
				{
					if(v2[i]%g1==0)
					{
						ans=0;
						break;
					}
				}
				if(ans==0)
				{    
					ans=g2;
					for(i=0;i<sz(v1);i++)
					{
						if(v1[i]%g2==0)
						{
							ans=0;
							break;
						}
					}
				}
			}
			cout<<ans<<endl;
		}


	}
}
