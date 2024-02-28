
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
#define     opt()    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"


int main()
{

    opt();

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i;
        cin>>n;

        int ar[n+3];

        int g=0;

        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
            g=gcd(g,ar[i]);
        }

        if(g==1) cout<<"0\n";
        else
        {
            int ans=3;
            for(i=n;i>=n-1;i--)
            {
                if(gcd(g,i)==1)
                {
                    ans=n-i+1;
                    break;
                }
            }

            cout<<ans<<endl;
        }
    }

    return 0;
}
