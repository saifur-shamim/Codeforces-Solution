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



int main()
{

    faster;


    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */

/// Patience, persistence, and perspiration make an unbeatable combination for success.
/// The formula for success: rise early, work hard, strike oil.
/// Winners are not afraid of losing. But losers are. Failure is part of the process of success. People who avoid failure also avoid success.

    int tc=1;
    cin>>tc;

    while(tc--)
    {

        ll n,i;
        cin>>n;

        ll ar[n+2];

        map<ll,ll> mp;
        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        mp[0]=1;
        mp[n-1]=-1;

        for(i=1; i<n-1; i++)
        {
            ll l=abs(ar[i]-ar[i-1]);
            ll r=abs(ar[i]-ar[i+1]);

            if(l<r)
            {
                mp[i]=-1;
            }
            else
            {
                mp[i]=1;
            }
        }

        ll lft[n+2],rit[n+2];

        lft[0]=0;
        rit[n-1]=0;
        for(i=1; i<n; i++)
        {
            if(mp[i]==-1)
            {
                lft[i]=1+lft[i-1];
            }
            else
            {
                lft[i]=abs(ar[i]-ar[i-1])+lft[i-1];
            }
        }

        for(i=n-1; i>=0; i--)
        {
            if(mp[i]==1)
            {
                rit[i]=1+rit[i+1];
            }
            else
            {
                rit[i]=abs(ar[i]-ar[i+1])+rit[i+1];
            }
        }

        ll m;
        cin>>m;

        while(m--)
        {
            ll u,v;
            cin>>u>>v;

            if(u==v)
            {
                cout<<"0\n";
            }
            else if(u<v)
            {
                cout<<rit[u-1]-rit[v-1];
                nl;
            }
            else
            {
                cout<<lft[u-1]-lft[v-1];
                nl;
            }
        }
    }

    return 0;
}
