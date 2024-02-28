///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=9000000000000000000;

int main()
{
    faster;
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i;
        string s;
        cin>>n>>s;

        map<string ,int>mp;

        for(i=0;i<n;i++)
        {
            string tmp;

            for(int j=i;j<n;j++)
            {
                tmp+=s[j];
                mp[tmp]=1;
            }
        }

        for(i=1;i<=n*(n+1);i++)
        {
            int num=i;

            string tmp;

            while(num)
            {
                if(num%27>=1) tmp+='a'+num%27-1;
                num/=27;
            }

            reverse(tmp.begin(),tmp.end());

            if(mp[tmp]==0)
            {
                cout<<tmp<<endl;
                break;
            }
        }
        mp.clear();
    }
}
