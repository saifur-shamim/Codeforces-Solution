///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef vector<pi> vpi;
typedef vector<pl>vpl;

#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define endl '\n'
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)

const int inf=2e9;
const ll infll=9000000000000000000;
const dl PI=acos(-1);

int main()
{
    int tc,i;

    vi v;

    for(i=1;i<=10000000;i++)
    {
        if(i%3!=0 && i%10!=3)
        {
            v.PB(i);
        }
    }

    cin>>tc;

    while(tc--)
    {
        int k;
        cin>>k;

        cout<<v[k-1]<<endl;
    }
}
