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
const ll infll=900000000000000000;

int main()
{
    faster;

    int tc;
    cin>>tc;

    while(tc--)
    {
        char s[205][205];

        int n,i,j;
        cin>>n;

        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>s[i][j];
            }
        }

        vpi v;

        if(s[1][2]==s[2][1])
        {
            if(s[1][2]=='1')
            {
                if(s[n-1][n]=='1') v.PB({n-1,n});
                if(s[n][n-1]=='1') v.PB({n,n-1});
            }
            else
            {
                if(s[n-1][n]=='0') v.PB({n-1,n});
                if(s[n][n-1]=='0') v.PB({n,n-1});
            }
        }
        else
        {
            if(s[1][2]==s[n-1][n] and s[1][2]==s[n][n-1])
            {
                v.PB({1,2});
            }
            else if(s[2][1]==s[n-1][n] and s[2][1]==s[n][n-1])
            {
                v.PB({2,1});
            }
            else
            {
                if(s[1][2]!=s[n-1][n])
                {
                    v.PB({1,2}),v.PB({n-1,n});
                }
                else
                {
                    v.PB({2,1}),v.PB({n-1,n});
                }
            }
        }

        cout<<sz(v)<<endl;

        for(i=0;i<sz(v);i++)
        {
            cout<<v[i].F<<" "<<v[i].S<<endl;
        }
    }
}
