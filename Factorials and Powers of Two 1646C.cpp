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
#define     nn        cout<<endl
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"
#define     minusone  cout<<"-1\n"
#define     fr(i,a,b)  for(ll i = a; i <= b; i++)
#define checkbit(x, k) (x & (1LL << k))

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

unordered_map<ll, int>mp;
vector<ll>v;
ll f[50];

int solve(ll n)
{
    int c = 0;
    for(int i=v.size()-1; i>=0; i--)
    {
        if(v[i] > n) continue;
        n -= v[i];
        c++;
    }
    return c;
}

int main()
{

    faster;
    ll x = 1;
    while(x < 1e12)
    {
        v.PB(x);
        mp[x] = 1;
        x *= 2;
    }
    x = 1;
    f[0] = -infll;
    for(ll i = 1; i<17; i++)
    {
        x *= i;
        //dbg(i,mp.count(x));
        //if(mp.count(x)) f[i] = -infll;
        f[i] = x;
    }
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll cnt = inf, c = 0, fc = 0;

        for(int i=0; i<32770; i++)
        {
            ll s = 0, c = 0;

            for(int j=17; j>=0; j--)
            {

                if(checkbit(i, j))
                {
                    s += f[j];
                    c++;
                }

               // dbg(j,s);
            }


            if(s > n || s < 0) continue;
            ll x = n;
            x -= s;
            c += solve(x);
            cnt = min(cnt, c);

            //dbg(i,s,cnt);
        }
        cout<<cnt;nn;


    }
}


