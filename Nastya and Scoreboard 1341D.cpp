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
#define     nn        cout<<endl
#define     negone    cout<<"-1\n"

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

const int mx=2005;

struct info
{
    int i, c, ans;
    info () {}
    info ( int i, int c, int ans ) : i(i), c(c), ans(ans) {}
} dir[mx][mx];

string a[mx];
string s[]= {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
int n,k,dp[mx][mx];

int getval(string s1,string s2)
{
    int cnt=0;

    for(int i=0; i<7; i++)
    {
        if(s1[i]=='0' and s2[i]=='1')
        {
            return -1;
        }

        if(s1[i]=='1' and s2[i]=='0')
        {
            cnt++;
        }
    }

    return cnt;
}

int solve(int i, int c)
{
    if(i==(n+1))
    {
        return (c==k);
    }

    if(dp[i][c]!=-1) return dp[i][c];

    int ret=0;

    for(int j=9; j>=0; j--)
    {
        int cost = getval ( s[j], a[i] );
        if ( cost == -1 ) continue;

        if ( c + cost <= k )
        {
            int d = solve ( i+1, c + cost );
            if ( d == 1 )
            {
                ret = 1;
                dir[i][c] = info( i+1, c+cost, j );
                break;
            }

        }
    }

    return dp[i][c] = ret;
}

void print ( int i, int c )
{
    if ( dir[i][c].ans == -1 ) return;
    cout << dir[i][c].ans;
    print ( dir[i][c].i, dir[i][c].c );
}

int main()
{

   // faster;


    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */


    cin>>n>>k;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    for ( int i = 0; i < mx; i++ )
    {
        for ( int j = 0; j < mx; j++ )
        {
            dir[i][j] = info ( -1, -1, -1 );
        }
    }

    mem ( dp, -1 );

    if ( solve ( 1, 0 ) == 1 )
    {
        print ( 1, 0 );
    }
    else cout << "-1";

    cout << endl;

    return 0;
}

