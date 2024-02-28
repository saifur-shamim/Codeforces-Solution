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
        int n,i;
        cin>>n;

        string a,b;
        cin>>a>>b;

        vpi v;
        int j=0,z=0,one=0;

        for(i=0; i<n; i++)
        {
            if(a[i]=='0') z++;
            else one++;

            if(z==one)
            {
                v.PB({j,i});
                j=i+1;
            }
        }

        for(auto it:v)
        {
            int st=it.F;
            int en=it.S;

            if(a[st]==b[st]) continue;
            else
            {

                for(i=st; i<=en; i++)
                {
                    if(a[i]=='0') a[i]='1';
                    else a[i]='0';
                }
            }
        }

        bool f=true;

        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                f=false;
                break;
            }
        }

        if(f) YES;
        else NO;

    }
    return 0;
}

