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

const int mx=2e5+24;
ll ar[mx],t[4*mx];

void init(ll id,ll b,ll e)
{
    if(b==e)
    {
        t[id]=ar[b];
        return;
    }
    ll mid=(b+e)>>1;
    init(id*2,b,mid);
    init(id*2+1,mid+1,e);

    t[id]=t[id*2] & t[id*2+1];

}
// query range based
ll query(ll id,ll b,ll e,ll i,ll j)
{
    if(e<i or b>j)
    {
        return INT_MAX;
    }
    if(b>=i and e<=j)
    {


        return t[id];
    }

    ll mid=(b+e)>>1;
    ll leftsum=query(id*2,b,mid,i,j);
    ll rightsum=query(id*2+1,mid+1,e,i,j);
    return (leftsum & rightsum);
}

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

        ll n,i;

        cin>>n;



        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }

        init(1,1,n);
        ll q;

        cin>>q;
        vl v;
        while(q--)
        {
            ll l,k;

            //dbg(q);
            cin>>l>>k;

            ll low=l,high=n;

            ll ans=-1;

            while(low<=high)
            {
                ll mid=low+(high-low)/2;

                ll tmp=query(1,1,n,l,mid);

                if(tmp>=k)
                {
                    ans=mid;
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }


            }
            v.pb(ans);
        }

        for(auto it:v)
        {
            cout<<it<<" ";
        }

        nn;

    }

    return 0;
}

