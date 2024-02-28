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

	int tc;
	cin>>tc;

	while(tc--)
	{
		int ar[5],i;

		for(i=0;i<4;i++) cin>>ar[i];

		int mx1=max(ar[0],ar[1]);
		int mx2=max(ar[2],ar[3]);

		sort(ar,ar+4);

		if((mx1==ar[3] or mx1==ar[2]) and (mx2==ar[2] or mx2==ar[3]))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}