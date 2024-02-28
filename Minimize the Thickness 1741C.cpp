///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

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
        ll n,i,j;
        cin>>n;
        ll ar[n+2],p[n+2],br[n+2];
        p[0]=0;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];

            p[i]=ar[i]+p[i-1];
        }

        sort(br+1,br+n+1);
        if(br[1]==br[n])
        {
            cout<<"1\n";
        }
        else
        {
            ll l=0,r=n;

            ll ans=n;
            ll tmp=1;
            while(tmp<n)
            {
                ll sum=p[r]-p[r-tmp];

                if((p[r]-sum)%sum==0 and p[1]<=sum)
                {
                    ll mx=tmp;
                    ll last=0;
                    for(i=1; i<=n-tmp; i++)
                    {
                        if(p[i]-p[last]==sum)
                        {
                            mx=max(i-last,mx);
                            last=i;
                        }
                    }

                    if(last == (n-tmp))
                        ans=min(ans,mx);

                }

                tmp++;


            }

            cout<<ans<<endl;
        }

    }
    return 0;
}
