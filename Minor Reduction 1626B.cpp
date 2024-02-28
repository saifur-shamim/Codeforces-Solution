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
        string s;
        cin>>s;

        bool f=false;

        for(ll i=sz(s)-1;i>0;i--)
        {

            if((s[i]-'0')+(s[i-1]-'0')>9)
            {
                f=true;
                ll tmp=(s[i]-'0')+(s[i-1]-'0');

                s[i]=(tmp%10)+'0';

                s[i-1]=(tmp/10)+'0';

                break;
            }
        }

        if(f)
        {
            cout<<s<<endl;
        }
        else
        {
            string  s1="";
            s1+=(s[0]-'0')+s[1];
            cout<<s1;
            for(ll i=2;i<sz(s);i++)
            {
                cout<<s[i];
            }

            cout<<endl;
        }
    }
    return 0;
}
