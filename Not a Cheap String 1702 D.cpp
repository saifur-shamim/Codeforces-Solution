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
    map<char,int>mp;
    char ch='a';

    for(int i=1; i<=26; i++)
    {
        mp[ch]=i;
        ch++;
    }
    int tc;
    cin>>tc;
    while(tc--)
    {
        string s;
        cin>>s;

        ll p;
        cin>>p;
        string s1=s;
        map<char, int> mp1;
        ll sum=0;
        for(int i=0; i<sz(s); i++)
        {
            mp1[s[i]]++;
            sum+=mp[s[i]];
        }
        int j=sz(s)-1;
        sort(all(s1));

        //cout<<" sum = "<<sum<<endl;
        while(sum>p and j>=0)
        {
            sum-=mp[s1[j]];
            mp1[s1[j]]--;
            j--;
        }

        for(int i=0; i<sz(s); i++)
        {
            if(mp1[s[i]]!=0)
            {
                cout<<s[i];
                mp1[s[i]]--;
            }
        }

        cout<<endl;
    }
    return 0;
}
