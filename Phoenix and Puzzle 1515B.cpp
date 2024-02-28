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

bool isSquare(int x)
{
	int rt=sqrt(x);

	return rt*rt==x;
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

    	ll n;

    	cin>>n;

    	if(n%2==0 && isSquare(n/2) || n%4==0 && isSquare(n/4))
    	{
    		cout<<"YES\n";
    	}
    	else
    	{
    		cout<<"NO\n";
    	}
    }


}