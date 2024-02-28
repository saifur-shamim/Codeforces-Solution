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
#define     mod       998244353
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


ull power(ll b,ll p)
{

    ull res=1;
    b%=mod;
    while(p>0)
    {
        if(p & 1)
        {
            res=(res*b)%mod;
        }
        p=p>>1;
        b=(b*b)%mod;
    }
    return res;
}

ull modinverse(ll n)
{

    return power(n,mod-2);
}
ull nCr(ll n,ll r)
{

    if(n<r) return 0;
    if(r==0) return 1;
    vector<ll>fact(n+1,0);
    fact[0]=1;
    for(ll i=1; i<=n; i++)
    {

        fact[i]=(fact[i-1]*i)%mod;
    }
    return (fact[n] * modinverse(fact[r])%mod * modinverse(fact[n-r])%mod)%mod;
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

    tc=1;


    while(tc--)
    {

        ll n,i;

        cin>>n;

        ll res=1;

        for(i=0; i<n/3; i++)
        {
            vl v(3);

            for(int j=0; j<3; j++)
            {
                cin>>v[j];
            }

            sort(all(v));

            if(v[0]==v[1] and v[1]==v[2])
            {
                res*=3;
            }

            else if(v[0]==v[1])
            {
                res*=2;
            }

            res%=mod;
        }



        res*= nCr(n/3,n/6);


        res%=mod;

        cout<<res<<endl;

    }

    return 0;
}


