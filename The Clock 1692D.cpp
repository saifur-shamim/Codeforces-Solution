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
        int a,b,x;
        char ch;
        cin>>a>>ch>>b>>x;

        int h=x/60,m=x%60;

        int cnt=0;
        map<string, int>mp;

        for(int i=0; i<=1440; i++)
        {
            int h1=a+h;
            int m1=b+m;

            if(m1>=60) h1++;

            a=h1%24;
            b=m1%60;

            string h11,m11;
            h11=to_string(a);
            m11=to_string(b);
            string hh,mm;
            if(sz(h11)==1)
            {
                hh='0';
                hh+=h11[0];
                h11=hh;
            }
            if(sz(m11)==1)
            {
                mm='0';
                mm+=m11[0];
                m11=mm;
            }

            string ans;
            ans=h11+m11;

            if(mp[ans]!=0) break;

            reverse(all(m11));

            if(m11==h11)
            {
                cnt++;
                mp[ans]++;
            }
        }

        cout<<cnt<<endl;
    }
    return 0;
}
