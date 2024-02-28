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



int main()
{

    faster;


    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */

    int tc=1;
    cin>>tc;



    while(tc--)
    {

        ll n,k,i;

        cin>>n>>k;

        ll a[n+2],h[n+2];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(i=1; i<=n; i++)
        {
            cin>>h[i];
        }

        h[n+1]=h[n];

        vl v;
        vpl ind;

        ll sum=0;
        ll l=1,f=n;
        for(i=1; i<=n; i++)
        {
            if(i+1<=n and h[i]%h[i+1]==0)
            {
                sum+=a[i];
            }
            else
            {
                sum+=a[i];
                v.pb(sum);
                // dbg(l,i);
                ind.pb({l,i});

                sum=0;
                l=i+1;
            }

            //dbg(i,sum);
        }

        if(sum!=0)
        {
            v.pb(sum);
            ind.pb({l,n});
        }
        ll ans=0;

        for(i=0; i<sz(v); i++)
        {
            // dbg(v[i]);
            ll j=ind[i].F;
            ll k1=ind[i].S;

            ll s=v[i];

            // dbg(i,j,k);

            while(j<=k1)
            {
                if(s<=k)
                {
                    //  dbg(j,k);
                    ans=max(ans,k1-j+1);

                    // dbg(ans);
                    break;
                }
                else if(s>k)
                {
                    if(a[j]>a[k1])
                    {
                        s-=a[j];
                        j++;
                    }
                    else
                    {
                        s-=a[k1];
                        k1--;
                    }
                }
            }
        }

        cout<<ans;
        nn;
    }

    return 0;
}

