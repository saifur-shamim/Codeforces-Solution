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
#define LIM 200005
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
		int n;
		cin>>n;

		int cnt2=0, cnt3=0;

		while(n%2==0)
		{
			n/=2;
			cnt2++;
		}

		while(n%3==0)
		{
			n/=3;
			cnt3++;
		}

		if(n==1 and cnt2<=cnt3)
		{
			cout<<2*cnt3-cnt2<<endl;
		}
		else
		{
			cout<<"-1\n";
		}
	} 

}