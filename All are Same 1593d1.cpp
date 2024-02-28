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

        ll n,i;

        vl v;

        cin>>n;

        for(i=0;i<n;i++)
        {

            ll a;
            cin>>a;

            v.PB(a);
        }

        sort(all(v));

        if(v[0]==v.back())
        {
            cout<<"-1\n";
            continue;
        }

        ll f=0,d;

        for(auto it:v)
        {
            d=it-v[0];
            f=gcd(f,d);
        }

        if(f==0) f=-1;

        cout<<f<<endl;
    }

    return 0;

}