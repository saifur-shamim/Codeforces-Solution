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

    int tc=1;
    // cin>>tc;

    for(int t=1; t<=tc; t++)
    {

        int n,m,i,j;

        cin>>n>>m;

        if(n==1)
        {
            if(m==1)
            {
                cout<<"1\n";
            }
            else if(m<=3)
            {
                cout<<"-1\n";
            }
            else if(m==4)
            {
                cout<<"3 1 4 2\n";
            }
            else
            {
                for(i=1; i<=m; i+=2)
                {
                    cout<<i<<" ";
                }

                for(i=2; i<=m; i+=2)
                {
                    cout<<i<<" ";
                }
                nl;
            }
        }
        else if(m==1)
        {
            if(n==1)
            {
                cout<<"1\n";
            }
            else if(n<=3)
            {
                cout<<"-1\n";
            }
            else if(n==4)
            {
                cout<<"3\n1\n4\n2\n";
            }
            else
            {
                for(i=1; i<=n; i+=2)
                {
                    cout<<i<<"\n";
                }

                for(i=2; i<=n; i+=2)
                {
                    cout<<i<<"\n";
                }
            }
        }
        else if(n==2 and n==m)
        {
            cout<<"-1\n";
        }
        else if(n<=m)
        {

            int ar[n+2][m+2];

            ar[1][1]=1;
            ar[n][m]=2;

            int val=3;

            for(j=2; j<=m; j++)
            {
                i=1;
                int j1=j;
                while(i<=n and j>=1)
                {
                    ar[i][j]=val++;
                    i++;
                    j--;
                }

                j=j1;
            }

            for(i=2; i<=n-1; i++)
            {
                j=m;

                int i1=i;
                while(i<=n and j>=1)
                {
                    ar[i][j]=val++;
                    i++;
                    j--;
                }

                i=i1;
            }

            for(i=1; i<=n; i++)
            {
                for(j=1; j<=m; j++)
                {
                    cout<<ar[i][j]<<" ";
                }
                nl;
            }
        }
        else
        {
            if(m==2)
            {
                ll ar[n+2][m+2];

                int val=1;

                for(i=1; i<=n; i++)
                {
                    ar[i][1]=val;

                    val+=2;
                }
                val=n*m;

                for(i=1; i<=n; i++)
                {
                    ar[i][2]=val;

                    val-=2;
                }

                int mid=n/2;

                if(n%2)
                swap(ar[mid][2],ar[mid+1][2]);
                else swap(ar[mid+1][2],ar[mid+2][2]);

                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=m; j++)
                    {
                        cout<<ar[i][j]<<" ";
                    }

                    nl;
                }
            }
            else
            {
                int ar[n+2][m+2];

                ar[1][1]=1;
                ar[n][m]=2;

                int val=3;

                for(j=2; j<=m; j++)
                {
                    i=1;
                    int j1=j;
                    while(i<=n and j>=1)
                    {
                        ar[i][j]=val++;
                        i++;
                        j--;
                    }

                    j=j1;
                }

                for(i=2; i<=n-1; i++)
                {
                    j=m;

                    int i1=i;
                    while(i<=n and j>=1)
                    {
                        ar[i][j]=val++;
                        i++;
                        j--;
                    }

                    i=i1;
                }

                for(i=1; i<=n; i++)
                {
                    for(j=1; j<=m; j++)
                    {
                        cout<<ar[i][j]<<" ";
                    }
                    nl;
                }
            }
        }
    }

    return 0;
}
