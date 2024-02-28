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

int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1}; //8 direction

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

        ll n,q,i;
        cin>>n>>q;

        ll ar[n+2];

        vector<string> s[n];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];

            s[i].PB(ar[i]);
        }

        while(q--)
        {
            ll type;
            cin>>type;

            if(type==2)
            {
                ll ind;
                cin>>ind;

                cout<<ar[ind-1]<<endl;
            }
            else
            {
                ll st,en;
                cin>>st>>en;

                for(i=st-1;i<en; i++)
                {
                    if(ar[i]<10)
                    {
                        continue;
                    }
                    else
                    {
                        ll sum=0;

                        cout<<s[i]<<endl;
                        for(int j=0; j<sz(s[i]); j++)
                        {
                            ll r=s[i][j]-'0';
                            cout<<" r = "<<r<<endl;
                            sum+=r;
                        }

                        cout<<" sum = "<<sum<<endl;
                        ar[i]=sum;
                        s[i]=sum;
                    }
                }
            }
        }
    }
    return 0;
}
