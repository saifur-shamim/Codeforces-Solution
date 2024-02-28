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
#define     sz(x)     (ll)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        prllf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"
#define     nl        cout<<endl
#define     mone    cout<<"-1\n"

// ll dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// ll dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const ll inf=2e9;
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

    ll tc=1;

    while(tc--)
    {

        ll n,i;

        cin>>n;

        vector<string> odd,ev;



        for(i=0; i<n; i++)
        {
            string s;
            cin>>s;

            if(sz(s)%2)
            {
                odd.pb(s);


            }
            else
            {
                ev.pb(s);

            }
        }

        ll l1=sz(odd);
        ll l2=sz(ev);

        map<ll,ll> mp1,mp2,mp3,mp4,mp5;

        ll ans=0;

        for(i=0; i<l2; i++)
        {
            ll l=sz(ev[i]);

            if(l==2)
            {
                ll sum=0;

                for(ll j=0; j<l; j++)
                {
                    sum+=ev[i][j]-'0';
                }

                mp1[sum]++;
            }
            else
            {
                ll sum=0;

                for(ll j=0; j<l; j++)
                {
                    sum+=ev[i][j]-'0';
                }

                mp2[sum]++;
            }
        }


        for(i=0; i<l2; i++)
        {
            ll l=sz(ev[i]);

            if(l==4)
            {
                ll sum=0;

                for(ll j=1; j<l; j++)
                {
                    sum+=ev[i][j]-'0';
                }

                sum-=ev[i][0]-'0';

                if(mp1[sum]!=0)
                {
                    ans+=mp1[sum]*1LL;
                }

                sum=0;

                for(ll j=0; j<l-1; j++)
                {
                    sum+=ev[i][j]-'0';
                }

                sum-=ev[i][3]-'0';

                if(mp1[sum]!=0)
                {
                    ans+=mp1[sum]*1LL;
                }
            }

        }

        for(auto it:mp1)
        {
            if(it.S>0)
            {
                ans+=it.S*it.S*1LL;
            }
        }
        for(auto it:mp2)
        {
            if(it.S>0)
            {
                ans+=it.S*it.S*1LL;
            }
        }

        for(i=0; i<l1; i++)
        {
            ll l=sz(odd[i]);

            if(l==1)
            {
                ll sum=0;

                for(ll j=0; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                mp3[sum]++;
            }
            else if(l==3)
            {
                ll sum=0;

                for(ll j=0; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                mp4[sum]++;
            }
            else
            {
                ll sum=0;

                for(ll j=0; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                mp5[sum]++;
            }
        }



        for(i=0; i<l1; i++)
        {
            ll l=sz(odd[i]);

            if(l==3)
            {
                ll sum=0;

                for(ll j=1; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                sum-=odd[i][0]-'0';


                if(mp3[sum]!=0)
                {
                    ans+=mp3[sum]*1LL;
                }

                sum=0;

                for(ll j=0; j<l-1; j++)
                {
                    sum+=odd[i][j]-'0';
                }


                sum-=odd[i][2]-'0';

                if(mp3[sum]!=0)
                {
                    ans+=mp3[sum]*1LL;
                }
            }
            else if(l==5)
            {
                ll sum=0;

                for(ll j=2; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                sum-=odd[i][0]-'0';
                sum-=odd[i][1]-'0';

                if(mp3[sum]!=0)
                {
                    ans+=mp3[sum]*1LL;
                }

                sum=0;

                for(ll j=0; j<l-2; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                sum-=odd[i][3]-'0';
                sum-=odd[i][4]-'0';

                if(mp3[sum]!=0)
                {
                    ans+=mp3[sum]*1LL;
                }

                sum=0;

                for(ll j=1; j<l; j++)
                {
                    sum+=odd[i][j]-'0';
                }

                sum-=odd[i][0]-'0';


                if(mp4[sum]!=0)
                {
                    ans+=mp4[sum]*1LL;
                }

                sum=0;

                for(ll j=0; j<l-1; j++)
                {
                    sum+=odd[i][j]-'0';
                }


                sum-=odd[i][4]-'0';

                if(mp4[sum]!=0)
                {
                    ans+=mp4[sum]*1LL;
                }
            }

        }

        for(auto it:mp3)
        {
            if(it.S>0)
            {
                ans+=it.S*it.S*1LL;
            }
        }
        for(auto it:mp4)
        {
            if(it.S>0)
            {
                ans+=it.S*it.S*1LL;
            }
        }

        for(auto it:mp5)
        {
            if(it.S>0)
            {
                ans+=it.S*it.S*1LL;
            }
        }

        cout<<ans;
        nl;


    }

    return 0;
}

