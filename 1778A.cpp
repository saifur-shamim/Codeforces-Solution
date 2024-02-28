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

        int n,i;
        cin>>n;

        int ar[n+2];
        int br[n+2];

        int sum=0;

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
            br[i]=ar[i];

        }

        sort(br+1,br+n+1);

        if(br[1]==1 and br[1]==br[n])
        {
            br[1]=-1;
            br[2]=-1;
            for(i=1; i<=n; i++)
            {
                sum+=br[i];
            }

            cout<<sum<<endl;
            continue;
        }
        else if(br[1]==-1 and br[1]==br[n])
        {
            br[1]=1;
            br[2]=1;
            for(i=1; i<=n; i++)
            {
                sum+=br[i];
            }

            cout<<sum<<endl;
            continue;
        }


        bool f=true;


        sum=0;
        for(i=1; i<=n; i++)
        {
            if(f==true and i+1<=n and ar[i]==-1 and ar[i]==ar[i+1])
            {
                sum+=2;
                f=false;
                i++;
            }
            else
            {
                sum+=ar[i];
            }
        }



        cout<<sum<<endl;
    }
    return 0;
}
