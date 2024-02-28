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

bool cmp(pair<ll,ll> x, pair<ll,ll> y)
{
	return x.F < y.F;
}
int main()
{	

	faster;

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

	ll t, a, b, n, i, arr[LIM], brr[LIM];
	cin >> t;
	while(t--){
		cin >> a >> b >> n;
		vpl v;
		for(i = 0; i < n; i++)
			cin >> arr[i];
		for(i = 0; i < n; i++){
			cin >> brr[i];
			v.PB({arr[i],brr[i]});
		}
		sort(v.begin(),v.end(),cmp);
		//for(i = 0; i < v.size(); i++)
		//cout << v[i].F << " " << v[i].S << endl;
		for(i = 0; i < n; i++){
			ll marbo = (v[i].S+a-1)/a;
			b -= marbo*v[i].F;
			if(b+v[i].F <= 0) break;
		}
		if(i == n) cout << "YES" << endl;
		else cout << "NO" << endl;

		v.clear();
	}

}