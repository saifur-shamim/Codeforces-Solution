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
#define     freq        make_pair
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

    int t=1;

    cin>>t;

lev:
    for(int k=1; k<=t; k++)
    {

        int n;
        cin>>n;

        string s;
        cin>>s;


        map<char,deque<int> > freq;


        for(int i=1; i<=2*n; i++)
        {
            int d;
            cin>>d;
            char c1;
            cin>>c1;

            freq[c1].pb(d);
        }

        char ch=s[0];

        vector<pair<string,string> > ans;

        int cnt1=0;

        for(auto it:freq)
        {
            sort(all(freq[it.F]));

            if(it.F!=ch and sz(freq[it.F])%2)
            {
                cnt1++;
            }
        }

        if(cnt1>sz(freq[ch]))
        {
            cout<<"IMPOSSIBLE\n";
            continue;
        }

        for(auto it:freq)
        {
            if(it.F==ch)
            {
                continue;
            }

            while(sz(freq[it.F])>=2)
            {

                string s1="",s2="";

                s1=it.F;
                s2=it.F;

                s1+=freq[it.F].front()+'0';
                s2+=freq[it.F].back()+'0';

                freq[it.F].pop_front();
                freq[it.F].pop_back();
                reverse(s1.begin(),s1.end());
                reverse(s2.begin(),s2.end());
                ans.pb({s1,s2});
            }

            if(sz(freq[it.F])==1 and ch!=it.F)
            {
                string s1="",s2="";

                s1=it.F;
                s2=ch;

                s1+=freq[it.F].front()+'0';


                freq[it.F].pop_front();

                s2+=freq[ch].front()+'0';
                freq[ch].pop_front();

                reverse(s1.begin(),s1.end());
                reverse(s2.begin(),s2.end());
                ans.pb({s1,s2});
            }
        }


        while(sz(freq[ch])>=2)
        {

            string s1="",s2="";

            s1=ch;
            s2=ch;

            s1+=freq[ch].front()+'0';
            freq[ch].pop_front();
            s2+=freq[ch].back()+'0';
            freq[ch].pop_back();


            reverse(s1.begin(),s1.end());
            reverse(s2.begin(),s2.end());


            ans.pb({s1,s2});
        }


        for(int i=0; i<sz(ans); i++)
        {
            cout<<ans[i].F<<" "<<ans[i].S<<endl;
        }

    }


    return 0;
}
