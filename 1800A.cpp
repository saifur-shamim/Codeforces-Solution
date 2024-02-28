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

    vector<pair<char,char> > v;

    v.PB({'m','M'});
    v.PB({'e','E'});
    v.PB({'o','O'});
    v.PB({'w','W'});

lev:
    while(tc--)
    {

        int n,i;
        cin>>n;

        string s;
        cin>>s;

        bool f=false;

        for(i=0; i<n; i++)
        {
            if(i==0 and (s[i]==v[0].F or s[i]==v[0].S))
            {
                int cnt=0;
                cnt++;

                int ind=0;
                ind++;
                int j;
                for(j=i+1; j<n; j++)
                {
                    if(s[j]==v[ind].F or s[j]==v[ind].S)
                    {
                        cnt++;
                        ind++;
                    }
                    else if(s[j]==v[ind-1].F or s[j]==v[ind-1].S)
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }

                if(cnt==4 and j==n)
                {
                    f=true;
                    YES;
                    goto lev;
                }
            }
        }

        NO;
    }

    return 0;
}
