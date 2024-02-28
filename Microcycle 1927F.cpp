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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>

///order_of_key (val) : Number of items strictly smaller than val.
///find_by_order(x) : x-th element in a set (zero based index).

typedef  long long ll;
typedef  long int li;
typedef  unsigned long long ull;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     pb        push_back
#define     dlt       pop_back
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
#define     nl        cout<<endl
#define     mone      cout<<"-1\n"
#define    For(i,a,b)  for(i = a; i <= b; i++)
#define    Forr(i,a,b)  for(i = a; i >= b; i--)

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;


const int N=2e5+25;

vector<pair<int,int> > graph[N];
map< pair<int,int>,int > mp;
vector<vector<int>> cycles;
vector<pair<int,int>> val;

int par[N],color[N];

void dfs_cycle(int u, int p, int color[], int par[], int& cyclenumber)
{


    if (color[u] == 2)
    {
        return;
    }


    if (color[u] == 1)
    {
        vector<int> v;
        cyclenumber++;

        set<int>  st;
        int cur = p;
        v.push_back(cur);




        while (cur != u)
        {

            st.insert(mp[ {cur,par[cur]}]);
            cur = par[cur];
            v.push_back(cur);


        }

        st.insert(mp[ {u,p}]);


        cycles.push_back(v);
        val.push_back({*st.begin(),cyclenumber});
        st.clear();
        return;
    }
    par[u] = p;


    color[u] = 1;


    for (auto it : graph[u])
    {


        if (it.first == par[u])
        {
            continue;
        }
        dfs_cycle(it.first, u, color, par, cyclenumber);
    }

    color[u] = 2;
}


void addEdge(int u, int v,int w)
{
    graph[u].push_back({v,w});
    graph[v].push_back({u,w});
    mp[ {u,v}]=w;
    mp[ {v,u}]=w;
}


void printCycles(int& cyclenumber)
{

    sort(all(val));

   // cout<<val[0].F<<" ";

    pf("%d ",val[0].F);

    int t1=val[0].S;

    int lim=sz(cycles[t1-1]);

    //cout<<lim<<endl;

    pf("%d \n",lim);

    for(int i=0; i<lim; i++)
    {
        //cout<<cycles[t1-1][i]<<" ";
        pf("%d ",cycles[t1-1][i]);
    }

    pf("\n");
}


int main()
{


    faster;
    int tc;
    scanf("%d",&tc);

    while(tc--)
    {


        int n,i,m;



        scanf("%d %d",&n,&m);

        for(int i=0; i<=n; i++)
        {
            graph[i].clear();
            color[i]=0;
            par[i]=0;
        }

        mp.clear();
        cycles.clear();
        val.clear();
        //dbg(m);
        while(m--)
        {
            int u,v,w;
            scanf("%d %d %d",&u,&v,&w);
            addEdge(u,v,w);
        }


        int cyclenumber=0;

        for(int i=1; i<=n; i++)
        {




            if(color[i]==0)
                dfs_cycle(i, 0, color, par, cyclenumber);
        }

        printCycles(cyclenumber);

    }
}
