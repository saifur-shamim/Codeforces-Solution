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
        ll n,i;
        cin>>n;

        string s;
        cin>>s;
        map<char,ll>mp;

        vl v1,v2;
        ll sm=0;
        ll mid=n/2;
        if(n%2) mid++;

        for(i=0; i<mid; i++)
        {
            mp[s[i]]++;

            if(s[i]=='L')
            {
                sm+=i;
                v1.PB(i);
            }
            else
            {
                sm+=(n-(i+1));
            }
        }

        for(; i<n; i++)
        {
            mp[s[i]]++;

            if(s[i]=='L')
            {
                sm+=i;
            }
            else
            {
                v2.PB(i);
                sm+=(n-(i+1));
            }
        }


        reverse(all(v1));

        vl ans;
        for(i=0; i<n; i++)
        {
            if(sz(v1)==0 and sz(v2)==0)
            {
                ans.PB(sm);
                continue;
            }

            ll a=0,a1=0,b1=0,b=0;
            if(!v1.empty())
            {

                 a=v1.back();
                 a1=n-(a+1);
                 a1=a1-a;
            }

            if(!v2.empty())
            {

                 b=v2.back();
                 b1=b-(n-b-1);

            }



            if(b1>a1)
            {
                sm+=b1;
                v2.pop_back();
            }
            else
            {
                sm+=a1;
                v1.pop_back();
            }

            ans.PB(sm);
        }


        for(auto it:ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
