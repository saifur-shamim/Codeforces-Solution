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
#define     del       pop_back
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


    while(tc--)
    {
        int n,m,i;
        cin>>n>>m;

        string s;
        cin>>s;

        s='#'+s;

        ll pr[n+2]= {0};

        for(i=1; i<=n; i++)
        {
            pr[i]=pr[i-1]+(s[i]-'0');
        }

        vi prev1(n+2,0),next0(n+2,0);

        int zero=-1,one=-1;

        for(i=1; i<=n; i++)
        {
            prev1[i]=one;

            if(s[i]=='1') one=i;
        }

        for(i=n; i>=1; i--)
        {
            next0[i]=zero;

            if(s[i]=='0') zero=i;
        }

        auto issorted=[&](int l,int r)->bool
        {

            int ones=pr[r]-pr[l-1];

            if(ones==0 or ones==r-l+1) return true;

            if(pr[r]-pr[r-ones]==ones) return true;

            return false;
        };

        set<pair<int,int> > st;

        while(m--)
        {
            int l,r;
            cin>>l>>r;

            if(issorted(l,r))
            {
                st.insert({-1,-1});
            }
            else
            {
                int left,right;

                if(next0[r]==-1)
                {
                    right=n;
                }
                else
                {
                    right=next0[r]-1;
                }

                if(prev1[l]==-1)
                {
                    left=1;
                }
                else
                {
                    left=prev1[l]+1;
                }

                st.insert({left,right});
            }
        }

        cout<<sz(st)<<endl;
    }

    return 0;
}




