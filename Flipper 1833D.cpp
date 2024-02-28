///Bismillahir Rahmanir Rahim
///Happy Coding

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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
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

        int  n,i;
        cin>>n;

        int cnt[n+2];

        int ar[n+2];
        for(i=1; i<=n; i++)
        {

            cin>>ar[i];

            cnt[ar[i]]=i;
        }

        if(n==1)
        {
            cout<<"1";
        }
        else if(n==2)
        {
            cout<<ar[2]<<" "<<ar[1];
        }
        else if(cnt[n]==n)
        {


            cout<<n<<" ";

            int indx=n-1;

            if(ar[1]>ar[indx])
            {
                for(i=1; i<=indx; i++)
                {
                    cout<<ar[i]<<" ";
                }
            }
            else
            {

                while(ar[indx]>ar[1] and indx>1)
                {
                    cout<<ar[indx]<<" ";
                    indx--;
                }

                for(i=1; i<=indx; i++)
                {
                    cout<<ar[i]<<" ";
                }
            }
        }
        else if(cnt[n]==1)
        {
            if(cnt[n-1]==n)
            {

                cout<<n-1<<" ";

               for(i=1;i<=n-1;i++)
               {
                   cout<<ar[i]<<" ";
               }
            }
            else
            {
                int indx=cnt[n-1];

                for(i=indx; i<=n; i++)
                {
                    cout<<ar[i]<<" ";
                }

                indx--;
                cout<<ar[indx]<<" ";
                indx--;
                while(ar[indx]>ar[1] and indx>1)
                {
                    cout<<ar[indx]<<" ";
                    indx--;
                }

                for(i=1; i<=indx; i++)
                {
                    cout<<ar[i]<<" ";
                }

            }

        }
        else
        {
            int indx=cnt[n];

            //dbg(indx);
            for(i=indx; i<=n; i++)
            {
                cout<<ar[i]<<" ";
            }

            indx--;
            cout<<ar[indx]<<" ";
            indx--;
            while(ar[indx]>ar[1] and indx>1)
            {
                cout<<ar[indx]<<" ";
                indx--;
            }

            for(i=1; i<=indx; i++)
            {
                cout<<ar[i]<<" ";
            }

        }

        cout<<endl;

    }

    return 0;
}

