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

ll solve(vl &v)
{
	ll i=0,j=sz(v)-1;

	ll ans=1;

	while(i<j)
	{
		if(v[i]!=v[j])
		{
			ans=0;
			break;
		}

		i++;
		j--;
	}

	return ans;
}

int main()
{	
	
	faster;
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

	int tc;
	cin>>tc;

	while(tc--)
	{
		ll n,i,j;
		cin>>n;

		ll ar[n+2];

		for(i=0;i<n;i++)
		{

			cin>>ar[i];
		}


		ll ans=-1,a,b;
		i=0,j=n-1;

		while(i<j)
		{
			if(ar[i]!=ar[j])
			{
				ans=1;
				a=ar[i];
				b=ar[j];
				break;
			}

			i++;
			j--;
		}

		if(ans==-1) cout<<"YES\n";
		else
		{
			vl v1,v2;

			for(i=0;i<n;i++)
			{
				if(ar[i]==a) continue;
				v1.PB(ar[i]);
			}

			for(i=0;i<n;i++)
			{
				if(ar[i]==b) continue;
				v2.PB(ar[i]);
			}

			ll ans1=solve(v1);
			ll ans2=solve(v2);

			if(ans1==1 or ans2==1)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}
	}

}