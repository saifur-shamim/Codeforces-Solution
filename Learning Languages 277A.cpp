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

vector<int> par,e[101];
vector<int> sz;

bool used[101];
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
    int n,m;
    cin>>n>>m;

    for ( int i = 0; i <= m; i++ ) par.push_back ( i );

    sz.resize( m+1, 1 );

    int z=0;
    for ( int i = 1; i <=n; i++ )
    {

        int k;
        cin>>k;

        if(k==0) z++;
        while(k--)
        {


            int u;
            cin>>u;


            e[i].PB(u);

            used[u]=true;


        }

        for(int j=1; j<sz(e[i]); j++)
        {
            int ur = find_par (e[i][j]);
            int vr = find_par (e[i][j-1]);

            if ( ur != vr )
            {
                Union ( ur, vr );
            }
        }

    }


    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        if(par[i]==i and used[i]) cnt++;
    }

    cout<<(max(cnt-1,0))+z<<endl;
    return 0;
}
