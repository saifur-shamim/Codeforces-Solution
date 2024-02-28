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
    map<char,int>mp;

    char ch='a';

    for(int i=1; i<=26; i++)
    {

        mp[ch]=i;
        ch++;
        // cout<<mp[i]<<" ";
    }

    while(tc--)
    {
        string s;
        cin>>s;

        map<char,vector<int> > m;


        string a="";
        if(mp[s[0]]>mp[s[sz(s)-1]])
        {

            for(int i=1; i<sz(s)-1; i++)
            {
                if(mp[s[i]]<=mp[s[0]] and mp[s[i]]>=mp[s[sz(s)-1]])
                {
                    m[s[i]].PB(i+1);
                    a.PB(s[i]);
                }
            }

            sort(all(a));

            cout<<mp[s[0]]-mp[s[sz(s)-1]]<<" "<<sz(a)+2<<endl;

            cout<<"1 ";

            for(int i=sz(a)-1; i>=0; i--)
            {
                while(!m[a[i]].empty())
                {
                    cout<<m[a[i]].back()<<" ";
                    m[a[i]].pop_back();
                }
            }

            cout<<sz(s)<<endl;
        }
        else
        {
            for(int i=1; i<sz(s)-1; i++)
            {
                if(mp[s[i]]>=mp[s[0]] and mp[s[i]]<=mp[s[sz(s)-1]])
                {
                    m[s[i]].PB(i+1);
                    a.PB(s[i]);
                }
            }

            sort(all(a));

            cout<<mp[s[sz(s)-1]]-mp[s[0]]<<" "<<sz(a)+2<<endl;

            cout<<"1 ";

            for(int i=0; i<sz(a); i++)
            {
                while(!m[a[i]].empty())
                {
                    cout<<m[a[i]].back()<<" ";
                    m[a[i]].pop_back();
                }
            }

            cout<<sz(s)<<endl;
        }
    }
    return 0;
}
