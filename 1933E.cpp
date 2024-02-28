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

    for(int t=1; t<=tc; t++)
    {

        ll n,i;
        cin>>n;

        ll sum=0;

        vl v;
        ll ar[n+2];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];

            sum+=ar[i];

            v.pb(sum);
        }

        ll q;
        cin>>q;

        while(q--)
        {
            ll l,u;
            cin>>l>>u;

            if(l==1)
            {
                ll ache=ar[l-1];

                ll due=u-ache;

                if(due<=0)
                {
                    cout<<l<<" ";

                }
                else
                {
                    auto it=lower_bound(all(v),v[l-1]+due)-v.begin();

                    if(it==n) it--;
                    ll dif=v[it];
                    ll ans;
                    if(dif<=u)
                    {
                        ans=it+1;
                    }
                    else
                    {

                        ll p1=(u*(u+1))/2;

                        ll extra=dif-u;

                        extra--;

                        p1-=(extra*(extra+1))/2;


                        dif=v[it-1];

                        ll p2=(u*(u+1))/2;

                        extra=u-dif;

                        p2-=(extra*(extra+1))/2;

                        if(p1>p2)
                        {
                            ans=it+1;
                        }
                        else ans=it;
                    }

                    cout<<ans<<" ";

                }
            }
            else
            {

                ll ache=ar[l-1];

                ll due=u-ache;

                if(due<=0)
                {
                    cout<<l<<" ";

                }
                else
                {
                    auto it=lower_bound(all(v),v[l-1]+due)-v.begin();

                    if(it==n) it--;
                    ll dif=v[it]-v[l-2];
                    ll ans;
                    if(dif<=u)
                    {
                        ans=it+1;
                    }
                    else
                    {

                        ll p1=(u*(u+1))/2;

                        ll extra=dif-u;

                        extra--;

                        p1-=(extra*(extra+1))/2;


                        dif=v[it-1]-v[l-2];

                        ll p2=(u*(u+1))/2;

                        extra=u-dif;

                        p2-=(extra*(extra+1))/2;

                        if(p1>p2)
                        {
                            ans=it+1;
                        }
                        else ans=it;
                    }

                    cout<<ans<<" ";

                }
            }

        }

        nl;
    }

    return 0;
}
