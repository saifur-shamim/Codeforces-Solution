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

int getMSB(int x)
{
    for(int i = 29; i >= 0; i--)
    {
        pf(" i = %d   %d>>%d = %d\n",i,x,i,x>>i);
        //pf(" %d>>%d & 1 =%d\n",(x>>i) & 1);
        if((x >> i) & 1)
        {
// (x >> i) & 1 is non-zero if i-th bit of x is 1
            return i;
        }
    }
    return -1; // x = 0, hence no MSB exists
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

    int n;
    cin>>n;

    int a[n+2];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    int cnt[30] = {};
    for(int i = 1; i <= n; i++) cnt[getMSB(a[i])]++;

    ll res = 0;
    for(int i = 0; i < 30; i++)
    {
        res += 1ll * cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << res << endl;

    return 0;
}
