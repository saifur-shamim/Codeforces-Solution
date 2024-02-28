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
        int n,i,q;
        cin>>n>>q;
        string s;
        cin>>s;

        while(q--)
        {
            int l,r;
            cin>>l>>r;

            bool f=false;

            for(i=l-2;i>=0;i--)
            {
                if(s[i]==s[l-1])
                {
                    f=true;
                    break;
                }
            }

            for(i=r;i<n and f==false;i++)
            {
                if(s[i]==s[r-1])
                {
                    f=true;
                    break;
                }
            }

            if(f)
            {
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}
