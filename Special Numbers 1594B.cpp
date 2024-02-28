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

ll power(ll base, ll pow)
{
    ll ans=1;
    while(pow>0)
    {
        if(pow%2==1)  ans = (ans*base)%mod;
        base=(base*base)%mod;
        pow=pow/2;
    }

    return ans%mod;
}

int main()
{
    faster;
    int tc;

    cin>>tc;

    while(tc--)
    {
        ll n,k;
        cin>>n>>k;

        string s;

        while(k)
        {
            if(k%2==0) s+='0';
            else s+='1';
            k=k/2;
        }

        ll ans=0;

        for(ll i=0;i<sz(s);i++)
        {
            if(s[i]=='1') ans+=power(n,i);

            ans=ans%mod;
        }

        cout<<ans<<endl;
    }
}
