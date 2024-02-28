///Bismillahir Rahmanir Rahim
///Happy Coding

/*

     * * * *             *              *  * * * * * *   *            *   * * * * *
    *                   * *             *  *             *            *   *         *
    *                  *   *            *  *             *            *   *          *
    *                 *     *           *  *             *            *   *           *
    *                *       *          *  *             *            *   *           *
     *              *         *         *  * * * * * *   *            *   *          *
       *           *           *        *  *             *            *   * * * * * *
         *        *             *       *  *             *            *   *  *
          *      * * * * * * * * *      *  *             *            *   *    *
           *    *                 *     *  *             *            *   *      *
           *   *                   *    *  *             *            *   *        *
           *  *                     *   *  *              *          *    *          *
    * * * *  *                       *  *  *                * * * * *     *            *


*/


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

#define     pb        push_back
#define     del       pop_back
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
#define     nn        cout<<endl
#define     negone    cout<<"-1\n"

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e5+235;
const ll infll=900000000000000000;

int par[inf];
ll sz[inf];
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
    cin >> n>>m;


    vector<pair<ll,pair<int, int>>> edges;

    ll ar[n+2];

    ll mn=infll;
    int rt;
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i];
        par[i]=i;
        sz[i]=0;

        if(mn>ar[i])
        {
            mn=ar[i];
            rt=i;
        }

    }

    for(int i=1; i<=m; i++)
    {

        int u,v;
        ll w;
        cin>>u>>v>>w;
        edges.push_back( { w, { u, v } } );
    }


    for(int i=1; i<=n; i++)
    {

        if(i==rt) continue;
        edges.push_back( { ar[i]+ar[rt], { rt,i } } );

    }

    ll MnST = 0;

    int cnt = 0;
    sort ( edges.begin(), edges.end() ); // Minimum Spanning Tree
    for ( auto e : edges )
    {
        int u = e.second.first;
        int  v = e.second.second;
        ll w = e.first;
        u = find_par(u);
        v = find_par(v);
        if ( u != v )
        {
            Union(u, v);
            MnST += w;
            cnt++;
            if ( cnt == n ) break;
        }
    }

    cout<<MnST<<endl;

    return 0;
}
