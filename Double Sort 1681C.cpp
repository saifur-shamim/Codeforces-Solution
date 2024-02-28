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
level:
    while(tc--)
    {
        int n,i,j;
        cin>>n;
        int a[n+2],a1[n+2],b[n+2],b1[n+2];

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
            a1[i]=a[i];
        }
        for(i=1; i<=n; i++)
        {
            cin>>b[i];
            b1[i]=b[i];
        }

        sort(a1+1,a1+n+1);
        sort(b1+1,b1+n+1);

        vpi v;


        for(i=1; i<=n; i++)
        {
            if(a1[i]==a[i] and b[i]==b1[i]) continue;
            else
            {
                bool f=false;
                for(int j=i+1; j<=n; j++)
                {
                    if(a1[i]==a[j] and b1[i]==b[j])
                    {
                        v.PB({i,j});
                        swap(a[i],a[j]);
                        swap(b[i],b[j]);
                        f=true;
                        break;
                    }
                }

                if(f==false)
                {
                    cout<<"-1\n";
                    goto level;
                }
            }
        }


        cout<<sz(v)<<endl;
        for(auto it:v)
        {
            cout<<it.F<<" "<<it.S<<endl;
        }


    }
    return 0;
}
