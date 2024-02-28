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

ll a[200005];
pair<ll,ll>seg[4 * 200005];
pair<ll,ll>segBoro[4 * 200005];

void build(ll lo, ll hi, ll ind)
{
    if(lo==hi)
    {
        seg[ind].F=a[lo];
        seg[ind].S=lo;
        return;
    }

    ll mid=(lo+hi)/2;

    build(lo, mid, 2*ind+1);
    build(mid+1, hi, 2*ind+2);

    seg[ind].F=min(seg[2*ind+1].F, seg[2*ind+2].F);
    if(seg[2*ind+1].F<=seg[2*ind+2].F) seg[ind].S=seg[2*ind+1].S;
    else seg[ind].S=seg[2*ind+2].S;
}

pair<ll,ll> query(ll lo, ll hi, ll ind, ll lq, ll rq)
{
    if(lq<=lo && rq>=hi) return {seg[ind].F, seg[ind].S};

    if(rq<lo || lq>hi) return {INT_MAX, INT_MAX};

    ll mid=(lo+hi)/2;
    pair<ll,ll> left_child=query(lo, mid, 2*ind+1, lq, rq);
    pair<ll,ll> right_child=query(mid+1, hi, 2*ind+2, lq, rq);

    if(left_child.F<=right_child.F) return left_child;
    else return right_child;
}

void buildBoro(ll lo, ll hi, ll ind)
{
    if(lo==hi)
    {
        segBoro[ind].F=a[lo];
        segBoro[ind].S=lo;
        return;
    }

    ll mid=(lo+hi)/2;

    buildBoro(lo, mid, 2*ind+1);
    buildBoro(mid+1, hi, 2*ind+2);

    segBoro[ind].F=max(segBoro[2*ind+1].F, segBoro[2*ind+2].F);
    if(segBoro[2*ind+1].F>segBoro[2*ind+2].F) segBoro[ind].S=segBoro[2*ind+1].S;
    else segBoro[ind].S=segBoro[2*ind+2].S;
}

pair<ll,ll> queryBoro(ll lo, ll hi, ll ind, ll lq, ll rq)
{
    if(lq<=lo && rq>=hi) return {segBoro[ind].F, segBoro[ind].S};

    if(rq<lo || lq>hi) return {INT_MIN, INT_MIN};

    ll mid=(lo+hi)/2;
    pair<ll,ll> left_child=queryBoro(lo, mid, 2*ind+1, lq, rq);
    pair<ll,ll> right_child=queryBoro(mid+1, hi, 2*ind+2, lq, rq);

    if(left_child.F>right_child.F) return left_child;
    else return right_child;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for(ll i=0; i<n; i++) cin>>a[i];

        build(0, n-1, 0);
        buildBoro(0, n-1, 0);

        ll q;
        cin>>q;
        while(q--)
        {
            ll l,r;
            cin>>l>>r;
            l--, r--;

            pair<ll,ll>suto=query(0, n-1, 0, l, r);
            //cout<<"-->"<<suto.F<<" "<<suto.S<<endl;
            pair<ll,ll>boro=queryBoro(0, n-1, 0, l, r);
            //cout<<"---->"<<boro.F<<" "<<boro.S<<endl;

            if(suto.F==boro.F) cout<<"-1 -1"<<endl;
            else cout<<min(suto.S+1, boro.S+1)<<" "<<max(boro.S+1, suto.S+1)<<endl;
        }

        for(ll i=0; i<=4*n; i++)
        {
            seg[i].F=0;
            seg[i].S=0;
            segBoro[i].F=0;
            segBoro[i].S=0;
        }
    }
}
