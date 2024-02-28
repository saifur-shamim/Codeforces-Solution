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
        int n,i,one=0,zero=0;
        cin>>n;

        for(i=0;i<n;i++)
        {
            int x;
            cin>>x;

            if(x) one++;
            else zero++;
        }

        if(zero==one)
        {
            cout<<zero<<endl;

            while(zero--)
            {
                cout<<"0 ";
            }
        }
        else if(zero<one)
        {
            if(one%2) one--;
            cout<<one<<endl;

            while(one--)
            {
                cout<<"1 ";
            }
        }
        else
        {
            cout<<zero<<endl;

            while(zero--)
            {
                cout<<"0 ";
            }
        }

        cout<<endl;
    }

    return 0;
}
