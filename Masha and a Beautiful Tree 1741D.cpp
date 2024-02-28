///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;
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
ll ans=0;
vl a;

void solve(ll l1,ll r1,ll l2,ll r2)
{
    ll mx=0;
    ll mn=infll;

    for(ll i=l1;i<=r1;i++)
    {
        mx=max(a[i],mx);
    }

    for(ll  i=l2;i<=r2;i++)
    {
        mn=min(a[i],mn);
    }

    if(mx>mn)
    {
        ll tmp=l2;
        for(ll i=l1;i<=r1;i++)
        {
            swap(a[i],a[tmp]);
            tmp++;
        }

        ans++;
    }

    if(l1==r1) return ;

    ll mid1=(l1+r1)/2;
    ll mid2=(l2+r2)/2;

    solve(l1,mid1,mid1+1,r1);
    solve(l2,mid2,mid2+1,r2);
}

int main()
{

    faster;
 /*
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
*/
    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;
        ans=0;

        a.resize(n+1);

        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }

        if(is_sorted(a.begin()+1,a.end()))
        {
            cout<<"0\n";
            continue;
        }

        ll mid=n/2;

        solve(1,mid,mid+1,n);

        if(is_sorted(a.begin()+1,a.end()))
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }

    return 0;
}
