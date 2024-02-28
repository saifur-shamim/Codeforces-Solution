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

        int n,i;
        cin>>n;

        int ar[n+2];


        set<int> st1,st2;

        int j=1;

        map<int,int> mp;

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];

            mp[ar[i]]=1;

            for(; j<=ar[i]; j++)
            {
                if(!mp[j])
                {
                    st1.insert(j);
                    j++;
                    break;
                }
            }
        }

        st2.insert(st1.begin(),st1.end());




        cout<<endl;
        vi ans1,ans2;

        for(i=1; i<=n; i++)
        {
            if(mp[ar[i]]==1)
            {
                ans1.pb(ar[i]);
                ans2.pb(ar[i]);
                mp[ar[i]]=2;
            }
            else
            {
                for(auto it:st1)
                {
                    ans1.pb(it);

                    st1.erase(it);
                    break;
                }

               auto it=st2.lower_bound(ar[i]);
               it--;

                ans2.pb(*it);

                st2.erase(it);
            }
        }


        for(auto it:ans1)
        {
            cout<<it<<" ";
        }

        nn;

        for(auto it:ans2)
        {
            cout<<it<<" ";
        }


    }

    return 0;
}
