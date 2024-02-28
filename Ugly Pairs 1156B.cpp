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
        string s,ans="",ans2="";
        cin>>s;
        ll n=s.size();
        sort(s.begin(),s.end());
        ll i=0,j=n/2;
        for(ll i=0; i<n; i++)
        {
            ll x=s[i]-97;
            //cout<<x+1<<endl;
            if((x+1)%2)
                ans+=s[i];
            else
                ans2+=s[i];
        }
        string n1=ans+ans2;
        reverse(ans.begin(),ans.end());
        reverse(ans2.begin(),ans2.end());
        ans+=ans2;
        int f1=0,f2=0;
        for(ll i=0; i<n-1 and (f1==0 or f2==0); i++)
        {
            if(abs(ans[i]-ans[i+1])==1)
            {
                f1=1;
            }

            if(abs(n1[i]-n1[i+1])==1)
            {
                f2=1;
            }
        }

        if(f1==1 and f2==1)
        {
            cout<<"No answer\n";
        }
        else
        {
            if(f1==0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<n1<<endl;
            }
        }

    }
    return 0;
}
