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

#define     PB        push_back
#define     dlt       pop_back
#define     MP        make_pair
#define     F         first
#define     S         second

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
#define     minusone  cout<<"-1\n"
#define     fr(i,a,b)  for(ll i = a; i <= b; i++)
#define     nn         cout<<endl

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

vector<int> par;
vector<int> sz;

int n;
int find_par ( int u )
{
    if ( u == par[u] ) return u;
    return par[u] = find_par ( par[u] );
}

void Union ( int u, int v )
{
    if(u<=0 or v<=0 or u>n or v>n) return ;

    u=find_par(u);
    v=find_par(v);

    if(u!=v)
    {

        if ( sz[u] < sz[v] ) swap ( u, v );
        par[v] = u;
        sz[u] += sz[v];
    }
}

int main()
{



    cin>>n;
    par.PB(0);
    int ar[n+2],i;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i];

        par.PB(i);
    }


    sz.resize(n+2,1);
    for(i=1; i<=n; i++)
    {
        int x;
        cin>>x;



        Union(i,i+x);
        Union(i,i-x);
    }

    bool f=true;
    for(i=1; i<=n; i++)
    {

        if(find_par(i)!=find_par(ar[i]))
        {

            f=false;
            break;
        }
    }

    if(f) YES;
    else NO;

    return 0;
}




