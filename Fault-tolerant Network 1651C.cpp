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
#define     minusone  cout<<"-1\n"
#define     fr(i,a,b)  for( i = a; i <= b; i++)

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;


ll add(ll val,vl &v)
{
    ll res=infll;

    for(ll i=0;i<sz(v);i++)
    {
        res=min(res, abs(val-v[i]));
    }

    return res;
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

    int tc;
    cin>>tc;


    while(tc--)
    {

        ll n,i;
        cin>>n;

        vl ar(n),br(n);

        fr(i,0,n-1) cin>>ar[i];
        fr(i,0,n-1) cin>>br[i];

        if(n==1)
        {
            cout<<abs(ar[0]-br[0])<<endl;
            continue;
        }

        vl a(7);
        a[0]=abs(ar[0]-br[0])+abs(ar[n-1]-br[n-1]);
        a[1]=abs(ar[0]-br[n-1])+abs(ar[n-1]-br[0]);


        a[2]=abs(ar[0]-br[0])+add(ar[n-1],br)+add(br[n-1],ar);
        a[3]=abs(ar[n-1]-br[n-1])+add(ar[0],br)+add(br[0],ar);
        a[4]=abs(ar[0]-br[n-1])+add(ar[n-1],br)+add(br[0],ar);
        a[5]=abs(ar[n-1]-br[0])+add(ar[0],br)+add(br[n-1],ar);

        a[6] =add(ar[0],br)+add(ar[n-1],br)+add(br[0],ar)+add(br[n-1],ar);

        sort(all(a));

        cout<<a[0]<<endl;


    }

    return 0;
}




