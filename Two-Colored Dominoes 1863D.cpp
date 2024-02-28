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
#define     fr(i,a,b)  for(ll i = a; i <= b; i++)
#define     nn         cout<<endl

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
        int n,m,i,j;

        cin>>n>>m;

        string s[n];

        for(i=0; i<n; i++)
        {
            cin>>s[i];


        }

        bool f=true;


        for(i=0; i<n-1; i++)
        {

            vi pos;

            for(j=0; j<m; j++)
            {
                if(s[i][j]=='U')
                {
                    pos.PB(j);
                }
            }


            if(sz(pos)%2)
            {
                f=false;
                break;
            }

            for(int k=0; k<sz(pos); k++)
            {
                int j=pos[k];

                if(k%2)
                {
                    s[i][j]='W';
                    s[i+1][j]='B';
                }
                else
                {
                    s[i][j]='B';
                    s[i+1][j]='W';
                }
            }
        }

        for(i=0; i<m-1; i++)
        {

            vi pos;

            for(j=0; j<n; j++)
            {
                if(s[j][i]=='L')
                {
                    pos.PB(j);
                }
            }


            if(sz(pos)%2)
            {
                f=false;
                break;
            }

            for(int k=0; k<sz(pos); k++)
            {
                int j=pos[k];

                if(k%2)
                {
                    s[j][i]='W';
                    s[j][i+1]='B';
                }
                else
                {
                    s[j][i]='B';
                    s[j][i+1]='W';
                }
            }
        }


        if(!f)
        {
            minusone;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    cout<<s[i][j];
                }

                cout<<endl;
            }
        }
    }

    return 0;
}




