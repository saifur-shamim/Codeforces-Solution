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

bool sortbysec(const pair<int,int> &a,
	const pair<int,int> &b)
{
	return (a.second < b.second);
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
		ll n,i;

		cin>>n;

		vpl v1;
		for(i=0;i<n;i++)
		{
			ll x;
			cin>>x;

			v1.PB(MP(i,x));
		}

		sort(v1.begin(),v1.end(),sortbysec);

		ll sum=0;
		vl ans(n+2);

		ll mid=n/2;
		ans[0]=mid;

		ll cnt=0,pos=mid+1,neg=mid-1;

		
		for(i=n-1;i>=0;i--)
		{
			ll ind=v1[i].F;
			ll time=v1[i].S;
			
			if(cnt%2==0)
			{
				ans[ind+1]=pos;

				sum+=(2*abs(mid-pos)*time);
				pos++;
				
			}
			else
			{
				ans[ind+1]=neg;
				sum+=(2*abs(mid-neg)*time);
				neg--;
				
			}

			cnt++;

			
		}

		cout<<sum<<endl;

		for(i=0;i<=n;i++)
		{
			cout<<ans[i]<<" ";
		}

		cout<<endl;
	}

}