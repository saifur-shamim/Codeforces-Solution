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
        string s;
        cin>>s;

        int n=sz(s);



        int zero,one;

        zero=count(s.begin(),s.end(),'0');
        one=count(s.begin(),s.end(),'1');

        vi pref,suf;

        int cnt=0;

        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                pref.pb(cnt);
            }

        }


        pref.pb(cnt);
        cnt=0;

        for(int i=n-1; i>0; i--)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else
            {
                suf.pb(cnt);
            }
        }


        suf.pb(cnt);

        auto possible=[&](int mid)->bool
        {


            for(int i=0;i<=mid; i++)
            {

                int rem=zero;

                rem-=pref[i];
                rem-=suf[mid-i];

                if(rem<=mid)
                {
                    return true;
                }
            }
            return false;
        };


       // dbg(one);
        int ans,low=0,high=one;



        while(low<=high)
        {
            int mid=low+(high-low)/2;


            if(possible(mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {

                low=mid+1;
            }


        }

        cout<<ans<<endl;

    }

    return 0;
}

