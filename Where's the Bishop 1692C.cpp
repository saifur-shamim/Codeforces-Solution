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
level :
    while(tc--)
    {
        string s[8];
        int i,j;
        string s1;
       // cin>>s1;
        for(i=0; i<8; i++)
        {
            cin>>s[i];
        }

        for(i=1; i<8; i++)
        {
            for(j=0; j<8; j++)
            {
                if(s[i][j]=='#')
                {
                    if((i+1)<8 and j+1<8 and i-1>=0 and j-1>=0 and s[i-1][j+1]=='#' and s[i-1][j-1]=='#' and s[i+1][j-1]=='#' and s[i+1][j+1]=='#')
                    {
                        cout<<i+1<<" "<<j+1<<endl;
                        goto level;
                    }
                }
            }
        }


    }
    return 0;
}
