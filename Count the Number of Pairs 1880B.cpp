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

        int n,k,i;
        cin>>n>>k;

        string s;
        cin>>s;

        map<char,int> mp;

        for(i=0; i<n; i++)
        {
            mp[s[i]]++;
        }

        int ans=0;

        char ch1='a',ch2='A';

        for(i=0; i<26; i++)
        {
            if(mp[ch1]<mp[ch2])
            {
                //capital boro;

                int mn=mp[ch1];

                ans+=mn;

                mp[ch2]-=mn;

                if(k>0)
                {
                    int lagbe=mp[ch2]/2;

                    ans+=min(lagbe,k);

                    k-=min(lagbe,k);
                }

            }
            else
            {

                int mn=mp[ch2];

                ans+=mn;

                mp[ch1]-=mn;

                if(k>0)
                {
                    int lagbe=mp[ch1]/2;

                    ans+=min(lagbe,k);

                    k-=min(lagbe,k);
                }
            }

            ch1++;
            ch2++;
        }

        cout<<ans<<endl;
    }

    return 0;
}

