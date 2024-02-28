///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long int ll;
typedef  long int li;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     PB        push_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;
const ll lm=1e9;


int main()
{

    faster;

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ll tc;
    cin>>tc;
    while(tc--)
    {
        int n,q;
        cin>>n>>q;
        vector<ll> a(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        vector<ll> pref(n+2,0);
        for(int i=1; i<=n; i++)
        {
            pref[i]=(a[i]+pref[i-1]);
        }
        vector<ll> ans(q);
        vector<pair<ll,int>> k(q);
        for(int i=0; i<q; i++)
        {
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        int AP=0;
        for(int i=0; i<q; i++)
        {
            while(true)
            {
                if(AP==n or a[AP+1]>k[i].first)break;
                AP++;
            }
            ans[k[i].second]=pref[AP];
        }

        for(int i=0; i<q; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
