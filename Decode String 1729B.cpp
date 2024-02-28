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
    int tc,i;
    cin>>tc;

    map<int,char>mp;

    char ch='a';

    for(i=1; i<=26; i++)
    {
        cout<<" i = "<<i<<" "<<ch<<endl;
        mp[i]=ch;
        ch++;
        // cout<<mp[i]<<" ";
    }

    /*
    while(tc--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        vector<char> ans;

        for(i=n-1; i>=0; i--)
        {
            int val;
            if(s[i]=='0')
            {
                val=(s[i-2]-'0')*10;
                val+=s[i-1]-'0';
                //cout<<" val "<<val<<endl;
                i-=2;
            }
            else
            {
                val=s[i]-'0';
                //cout<<" val = "<<val<<endl;
            }

            //cout<<mp[val]<<" "<<endl;
            ans.PB(mp[val]);
        }



        for(i=sz(ans)-1;i>=0;i--)
        {
            cout<<ans[i];
        }

        cout<<endl;
    }  */
    return 0;
}
