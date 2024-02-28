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

        int k,n;
        cin>>k>>n;

        int dif=n-k;

        int sum=((k-1)*k)/2;
        sum++;

        //cout<<"sum = "<<sum<<endl;
        if(k==n)
        {
            for(int i=1; i<=k; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            continue;
        }
        else if(sum<=n)
        {
            //cout<<" else if \n";
            int st=0;
            int val=1;
            cout<<"1 ";
            for(int i=1; i<k; i++)
            {
                cout<<val+i<<" ";


                val+=i;

            }

            cout<<endl;


        }
        else
        {
            int st=1;
            int val=1;
            cout<<"1 ";
            for(int i=2; i<=k; i++)
            {
                if(dif-(i-1)>=0)
                {
                    cout<<val+i<<" ";
                    val=val+i;
                    dif-=(i-1);
                }
                else
                {
                    cout<<val+1<<" ";
                    val++;
                }



            }

            cout<<endl;
        }
    }
    return 0;
}

