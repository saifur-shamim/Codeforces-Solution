///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;


const int mx = 2e5+123;
ll prop[mx*3];
bool vis[mx*3];
int a[mx];
void shift ( ll id )
{
    prop[id*2] += prop[id];
    prop[id*2+1] += prop[id];
    vis[id*2] = vis[id*2+1] = 1;
    prop[id] = vis[id] = 0;
}
/*
void init ( int id, int b, int e )
{
    if ( b == e )
    {
        prop[id] = a[b];
        return;
    }
    int mid = ( b + e ) >> 1;
    init ( id*2, b, mid );
    init ( id*2+1, mid+1, e );
}  */

// update range based
void upd( ll id, ll b, ll e, ll i, ll j, ll val )

{
    if ( b > j || e < i ) return;
    if ( b >= i && e <= j )
    {
        prop[id] += val;
        vis[id] = 1;
        return;
    }
    int mid = ( b + e ) >> 1;
    upd ( id*2, b, mid, i, j, val );
    upd ( id*2+1, mid+1, e, i, j, val );
}

// Query only one index. Not range based
ll ask ( ll id, ll b, ll e, ll i )
{
    if ( i < b || i > e ) return 0;
    if ( b == e && i == b ) return prop[id];
    if ( vis[id] ) shift ( id );
    int mid = ( b + e ) >> 1;
    ll left = ask ( id*2, b, mid, i );
    ll right = ask ( id*2+1, mid+1, e, i );
    return left + right;
}

ll sod(ll val,ll n)
{
    ll mn=n;

    if(mn>3) mn=3;

    ll res=val;
    while(mn--)
    {
        res=val;

        ll ans=0;

        while(res)
        {
            ans+=res%10;
            res/=10;
        }

        val=ans;

    }

    return val;
}
int main()
{

    faster;
    int tc;

    cin>>tc;

    while(tc--)
    {

        mem(prop,0);
        mem(vis,0);
        ll n,q,i;
        cin>>n>>q;

        ll ar[n+2];


        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }

        while(q--)
        {
            ll type;

            cin>>type;

            if(type==1)
            {
                // update;

                ll a,b;
                cin>>a>>b;

                upd(1,1,n,a,b,1);

            }
            else
            {
                ll pos;
                cin>>pos;

                ll times=ask(1,1,n,pos);

                if(times==0)
                {
                    cout<<ar[pos]<<endl;
                }
                else
                {
                    ll ans=sod(ar[pos],times);

                    cout<<ans<<endl;
                }
            }
        }
    }

    return 0;
}
