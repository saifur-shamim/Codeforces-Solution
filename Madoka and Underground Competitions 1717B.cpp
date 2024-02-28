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
        int n,k,r,c,i,j;
        cin>>n>>k>>r>>c;

        char s[n+1][n+1];

        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                s[i][j]='.';
            }
        }


        int mod=c%k;
        for(i=r-1;i>=1;i--)
        {
            mod++;

            for(j=mod;j<=n;j+=k)
            {
                s[i][j]='X';
            }


            mod%=k;
        }

        mod=(c)%k;




        for(i=r+1;i<=n;i++)
        {

             mod--;
            for(j=mod;j<=n;j+=k)
            {
                s[i][j]='X';
            }


            if(mod==0) mod=k;


        }

        for(j=(c%k);j<=n;j+=k)
        {
            s[r][j]='X';
        }

        for(j=(c%k);j>=1;j-=k)
        {
            s[r][j]='X';
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
