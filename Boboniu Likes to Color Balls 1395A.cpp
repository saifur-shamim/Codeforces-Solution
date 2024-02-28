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
		int r,g,b,w,odd=0,ev=0;

		cin>>r>>g>>b>>w;

		if(r%2==0) ev++;
		else odd++;

		if(g%2==0) ev++;
		else odd++;

		if(b%2==0) ev++;
		else odd++;

		if(w%2==0) ev++;
		else odd++;

		if(odd<=1) cout<<"Yes\n";
		else
		{
			
			if(r>=1 and g>=1 and b>=1)
			{
				
				r--,g--,b--,w++;

				odd=0,ev=0;

				if(r%2==0) ev++;
				else odd++;

				if(g%2==0) ev++;
				else odd++;

				if(b%2==0) ev++;
				else odd++;

				if(w%2==0) ev++;
				else odd++;

				if(odd<=1) cout<<"Yes\n";
				else cout<<"No\n";
			}
			
            else
            {
            	cout<<"No\n";
            }
			


		}


	}

}