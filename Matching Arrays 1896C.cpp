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
#define     mone    cout<<"-1\n"

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
        ll n,x,i;
        cin>>n>>x;

        vl v1(n),v2(n);

        vpl v3;
        for(i=0; i<n; i++)
        {
            cin>>v1[i];

            v3.pb({v1[i],i});
        }

        for(i=0; i<n; i++)
        {
            cin>>v2[i];


        }

        sort(all(v3));
        sort(all(v2));

        vl ans(n);
        ll pos=0;

        ll j=n-1;
        i=n-1;

        while(i>=0 and j>=0)
        {
            if(v3[i].F>v2[j])
            {
                pos++;
                i--;
                j--;
            }
            else j--;
        }

        ll impos=0;
        i=j=0;

        while(i<n and j<n)
        {
            if(v3[i].F<=v2[j])
            {
                impos++;
                i++;
                j++;
            }
            else j++;
        }

        ll xx=n-impos;

        //dbg(pos,impos,xx);
        if(x<xx or x>pos)
        {
            NO;
        }
        else
        {
            YES;

            j=0;

            for(i=x;i<n;i++)
            {
                ll ind=v3[j].S;
                ans[ind]=v2[i];
                j++;
            }

            ll f=0;
            for(i=j;i<n;i++)
            {
                ll ind=v3[i].S;
                ans[ind]=v2[f];
                f++;
            }

            for(auto it:ans)
            {
                cout<<it<<" ";
            }

            cout<<endl;
        }



    }



    return 0;
}
