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
        string s;
        cin>>s;
        int i,len=n;
        int cnt1=0,cnt2=0,due=0;
        for(i=0; i<len;)
        {
            while(s[i]=='Q' and i<len)
            {
                cnt1++;
                i++;
            }

            while(s[i]=='A' and i<len)
            {
                cnt2++;
                i++;
            }

            //cout<<"i "<<i<<endl;
            //cout<<" cnt1 = "<<cnt1<<"  cnt2 = "<<cnt2<<endl;
            if(cnt1>cnt2)
            {
                due+=cnt1-cnt2;
            }

            if(due>0 and cnt2>cnt1)
            {
                int mn=cnt2-cnt1;
                due=max(0,due-mn);
            }

            cnt1=cnt2=0;
        }

        if(due==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
