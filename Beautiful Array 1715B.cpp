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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        ll due=s-(k*b);
        due-=k-1;
        ll div;
        div=due;
        ll d=s/k;
        if (due<0) div=0;
        if(n>1 and due%(n-1)!=0 )
        {
            div=due/(n-1);
            div++;
        }

        else if(n>1 and due%(n-1)==0)
        {
            div=due/(n-1);

        }
        if(div<k and d>=b)
        {
            ll f;
            f=k*b;
            f+=k-1;

            if(f>s) f=s;
            else if(f<0) f=s;

            vl v;
            v.PB(f);

            if(s-f<=0)
            {
                div=0;
            }
            else if((s-f)%(n-1)==0)
            {
                div=(s-f)/(n-1);
            }
            else
            {
                div=(s-f)/(n-1);
                div++;
            }

            s=s-f;
            for(ll i=0; i<n-1; i++)
            {

                v.PB(div);


                s-=div;
                div=max(0LL,min(s,div));
            }

            sort(all(v));
            for(auto it:v)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}
