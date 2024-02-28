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

ll bs(ll l,ll h, ll val,ll prev,ll pr[])
{
    if(l<=h)
    {
        ll mid=(l+h)/2;

        if(pr[mid]-prev<=val)
        {
            if(mid==h)
            {
                return mid;
            }
            else
            {
                if(pr[mid+1]-prev<=val)
                {
                    return bs(mid+1, h, val, prev, pr);
                }
                else
                {
                    return mid;
                }
            }

        }
        else
        {
            bs(l,mid-1,val,prev,pr);
        }
    }
    else
    {
        return -1*1LL;
    }
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
    cin>>tc;

    while(tc--)
    {

        ll n,i;
        cin>>n;

        ll ar[n+2],br[n+2],pr[n+2]= {0};

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }


        for(i=1; i<=n; i++)
        {
            cin>>br[i];

            pr[i]=br[i]+pr[i-1];
        }

        ll freq[n+2]= {0},ans[n+2]= {0};

        for(i=1; i<=n; i++)
        {
            ll j=bs(i,n,ar[i],pr[i-1],pr);

            if(j==-1)
            {
                ans[i]+=ar[i];
            }
            else{
                freq[i]++;

                if(j+1<=n)
                {
                    freq[j+1]--;
                    ans[j+1]+=ar[i]-(pr[j]-pr[i-1]);
                }
            }
        }

        for(i=1;i<=n;i++)
        {
            freq[i]+=freq[i-1];
        }

        for(i=1;i<=n;i++)
        {
            ans[i]+=freq[i]*br[i];

            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}
