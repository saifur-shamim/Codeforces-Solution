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
        int a,b;
        cin>>a>>b;
        int c=a;
        int d=b;
        string s;
        cin>>s;

        for(auto u:s)
        {
            if(u=='0') a--;
            else if(u=='1') b--;
        }

        int n=s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='?'&&s[n-1-i]=='0')
            {
                s[i]='0';
                a--;
            }
            if(s[i]=='?'&&s[n-1-i]=='1')
            {
                s[i]='1';
                b--;
            }
        }
        for(int i=0; i<n&&i<=n-1-i; i++)
        {
            if(s[i]!='?'||s[n-1-i]!='?')
                continue;
            if(i==n-1-i)
            {
                if(a>=b)
                {
                    s[i]='0';
                    a--;
                }
                else
                {
                    s[i]='1';
                    b--;
                }
            }
            else
            {
                if(a>=b)
                {
                    s[i]='0';
                    s[n-1-i]='0';
                    a-=2;
                }
                else
                {
                    s[i]='1';
                    s[n-1-i]='1';
                    b-=2;
                }
            }
        }
        for(auto u:s)
        {
            if(u=='0') c--;
            else if(u=='1') d--;
        }
        string w=s;
        reverse(w.begin(),w.end());
        //cout<<s<<endl;
        if(c==0&&d==0&&s==w)
        {
            cout<<s<<'\n';
        }
        else cout<<-1<<'\n';
    }

}
