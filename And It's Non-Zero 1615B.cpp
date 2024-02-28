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


const int N = (int)2e5+5;
int pr[20][N];
int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    for(int i=0; i<20; i++)
    {
        for(int j=1; j<N; j++)
        {
            pr[i][j]=pr[i][j-1];

            if(!((j>>i)&1))
                pr[i][j]++;
        }
    }

    int tc;
    cin>>tc;

    while(tc--)
    {
        int l,r,i;
        cin>>l>>r;

        int res=r-l+1;

        for(i=0;i<20;i++)
        {
            res=min(res,pr[i][r]-pr[i][l-1]);
        }

        cout<<res<<endl;
    }

    return 0;
}
