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
    int tc;
    cin>>tc;

    while(tc--)
    {
        int px,py,cr=0,cl=0,cu=0,cd=0,cr1=0,cl1=0,cu1=0,cd1=0,i;

        cin>>px>>py;

        string s;
        cin>>s;

        for(i=0;i<sz(s);i++)
        {
            if(s[i]=='R') cr1++;
            else if(s[i]=='L') cl1++;
            else  if(s[i]=='U') cu1++;
            else cd1++;
        }

        if(px>0) cr=px;
        else cl=abs(px);

        if(py>0) cu=py;
        else cd=abs(py);

        if(cr<=cr1 && cl<=cl1 && cd<=cd1 &&  cu<=cu1)
        {
            cout<<"YES\n";
        }
        else{cout<<"NO\n";}
    }
}
