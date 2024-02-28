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

vector<int> par[3];
vector<int> sz[3];

int find_par (int t,int u )
{
    if ( u == par[t][u] ) return u;
    return par[t][u] = find_par ( t,par[t][u] );
}

void Union ( int t, int u, int v )
{
    if ( sz[t][u] < sz[t][v] ) swap ( u, v );
    par[t][v] = u;
    sz[t][u] += sz[t][v];
}

int main()
{


    int n,m1,m2;
    cin>>n>>m1>>m2;

    for ( int i = 0; i <= n; i++ )
    {
        par[0].PB(i);
        par[1].PB(i);
    }

    sz[0].resize( n+1, 1 );

    sz[1].resize( n+1, 1 );


    for ( int i = 0; i < m1; i++ )
    {
        int u,v;
        cin>>u>>v;

        int ur = find_par ( 0,u );
        int vr = find_par ( 0,v);

        if ( ur != vr )
        {
            Union ( 0,ur, vr );
        }

    }

    for ( int i = 0; i < m2; i++ )
    {
        int u,v;
        cin>>u>>v;

        int ur = find_par ( 1,u );
        int vr = find_par ( 1,v);

        if ( ur != vr )
        {
            Union ( 1,ur, vr );
        }

    }

    vpi ans;

    for(int i=1; i<n; i++)
    {

        for(int j=i+1; j<=n; j++)
        {
            if(find_par (0,i )!=find_par (0,j ) and find_par (1,i)!=find_par (1,j))
            {
                ans.PB({i,j});

                Union(0,par[0][i],par[0][j]);
                Union(1,par[1][i],par[1][j]);
            }
        }
    }

    cout<<sz(ans)<<endl;

    for(auto it:ans)
    {
        cout<<it.F<<" "<<it.S<<endl;
    }


}
