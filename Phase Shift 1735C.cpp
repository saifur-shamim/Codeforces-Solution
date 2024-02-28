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
map<char,char>mp,mp1;
bool check(char ch1,char ch2)
{
    char ch;
    while(mp[ch1]!=ch)
    {
        ch1=mp[ch1];
        if(ch1==ch2) return false;
    }

    return true;
}
int main()
{

    //faster;
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
        int n,i;
        cin>>n;

        string s;
        cin>>s;

        for(i=0; i<n; i++)
        {

            if(mp[s[i]])
            {

                cout<<mp[s[i]];
                continue;
            }
            else
            {

                bool f=0;
                for(char ch='a'; ch<='z'; ch++)
                {


                    if(mp1[ch]==0 and ch!=s[i] and check(ch,s[i]))
                    {

                        mp[s[i]]=ch;
                        mp1[ch]=s[i];
                        f=1;
                        break;
                    }



                }

                if(f==0)
                {
                    for(char ch='a'; ch<='z'; ch++)
                    {
                        if(mp1[ch]==0)
                        {

                            mp[s[i]]=ch;
                            mp1[ch]=s[i];
                            break;
                        }

                    }

                }

                cout<<mp[s[i]];
            }

        }

        cout<<endl;

        mp1.clear();
        mp.clear();
    }

    return 0;
}
