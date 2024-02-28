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
        int n;
        cin>>n;

        if(n==3)
        {
            cout<<"1 2 3"<<endl;
            continue;
        }

        if(n%4==0)
        {
            int add=(1<<26);

            int val=1;
            for(int i=1; i<=n/2; i++)
            {
                cout<<val<<" "<<val+add<<" ";
                val++;
            }
            cout<<endl;
        }
        else if(n%2==0)
        {
            int add1=(1<<26);
            int add0=(1<<25);

            cout<<"0 "<<add1<<" ";
            int val=1;
            for(int i=1; i<=(n/2)-2; i++)
            {
                cout<<val<<" "<<val+add0<<" ";
                val++;
            }

            cout<<val<<" "<<val+add0+add1<<endl;
        }
        else
        {
            int div=n/2;

            if(div%2)
            {
                int add1=(1<<26);
                int add0=(1<<25);

                int val=1;
                cout<<"0 "<<val<<" "<<val+add1<<" ";
                val++;
                for(int i=1; i<=(n/2)-2; i++)
                {
                    cout<<val<<" "<<val+add0<<" ";
                    val++;

                }

                cout<<val<<" "<<val+add0+add1<<endl;
            }
            else
            {
                int add=(1<<25);
                int val=1;

                cout<<"0 ";
                for(int i=1; i<=n/2; i++)
                {
                    cout<<val <<" "<<val+add<<" ";
                    val++;
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
