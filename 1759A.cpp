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

        string s;
        cin>>s;

        vi v;

        for(int i=0; i<sz(s); i++)
        {
            if(s[i]=='Y')
            {
                v.PB(0);
            }
            else if(s[i]=='e')
            {
                v.PB(1);
            }
            else if(s[i]=='s')
            {
                v.PB(2);
            }
            else
            {
                v.PB(7);
            }
        }

        int v1=v[sz(v)-1];

        if(v1==2 or v1==7)
        {
            v1=0;
        }
        else
        {
            v1+=1;
        }
        v.PB(v1);
        bool f=true;

        for(int i=0; i<sz(s); i++)
        {
            int val=v[i];
            int val2;

            if(val==2)
            {
                val2=0;
            }
            else
            {
                val2=val+1;
            }

            if(val==v[i] and val2==v[i+1])
            {
                continue;
            }
            else
            {
                f=false;
                break;
            }

        }

        if(f) YES;
        else NO;
    }
    return 0;
}
