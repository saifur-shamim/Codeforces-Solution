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
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;
        string s;
        cin>>s;

        ll cnt=0;
        for(i=0; i<n;)
        {
            if(s[i]=='(' and s[i+1]==')')
            {
                i+=2;
                cnt++;
            }
            else if(s[i]==s[i+1])
            {
                i+=2;
                cnt++;
            }
            else
            {
                ll ok=0;
                for(ll j=i+1;j<n;j++)
                {
                    if(s[j]==')')
                    {
                        cnt++;
                        i=j+1;
                        ok=1;
                        break;
                    }
                }

                if(!ok) break;
            }
        }

        cout<<cnt<<" "<<n-i<<endl;
    }

    return 0;
}
