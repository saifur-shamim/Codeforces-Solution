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

    int tc;
    cin>>tc;
    //tc=1;


    while(tc--)
    {

        ll n,k,i;
        cin>>n>>k;

        set<ll> st[k+1];

        vpl v;

        for(i=1; i<=n; i++)
        {
            ll a;
            cin>>a;

            st[a].insert(i);

            v.pb({a,i});
        }

        ll ans[k+1]= {0};

        sort(all(v));

        for(i=n-1; i>=0; i--)
        {
            ll c=v[i].F;

            //dbg(c);
            if(ans[c]!=0)
            {
                if(i-1>=0)
                {
                    st[v[i-1].F].insert(*st[c].begin());
                    auto it=st[c].end();

                    it--;
                    ll s=*it;
                    st[v[i-1].F].insert(s);
                }

                continue;
            }
            if(st[c].empty())
            {
                ans[c]=0;
                continue;
            }

            ll f=*st[c].begin();

            auto it=st[c].end();

            it--;
            ll s=*it;

            //dbg(f,s);
            if(i-1>=0)
            {
                st[v[i-1].F].insert(f);
                st[v[i-1].F].insert(s);
            }

            s-=f;

            s++;

            ans[c]=2*s;

        }


        for(i=1; i<=k; i++)
        {
            cout<<ans[i]<<" ";
        }

        nn;
    }

    return 0;
}


