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
#define     siz(x)     (int)x.size()
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
vector<int> par;
vector<int> sz;
int find_par ( int u )
{
    if ( u == par[u] ) return u;
    return par[u] = find_par ( par[u] );
}

void Union ( int u, int v )
{
    if ( sz[u] < sz[v] ) swap ( u, v );
    par[v] = u;
    sz[u] += sz[v];
}

int main()
{

    int tc;
    cin>>tc;

    while(tc--)
    {


        int n;
        cin>>n;

        for ( int i = 0; i <= n; i++ )
        {

            par.push_back ( i );
        }

        sz.resize( n+1, 1 );

        for ( int i = 0; i < n; i++ )
        {
            int u;
            cin>>u;

            int ur = find_par ( i+1 );
            int vr = find_par ( u );

            if ( ur != vr )
            {
                Union ( ur, vr );
            }

            ur = find_par ( i+1 );
            vr = find_par ( u );

           // dbg(i+1,ur,u,vr);


        }


        for(int i=1; i<=n; i++)
        {
            int rt=find_par(i);

            cout<<sz[rt]<<" ";
        }

        cout<<endl;

        par.clear();
        sz.clear();
    }

    return 0;
}
