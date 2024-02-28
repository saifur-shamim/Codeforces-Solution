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
        cin>>n;

        char s[n+1][n+1];
        string s1;
        cin>>s1;

        vi v;

        for(i=0; i<n; i++)
        {
            if(s1[i]=='2')
            {
                v.PB(i);
            }
        }

        if(sz(v)==1 || sz(v)==2)
        {
            cout<<"NO\n";
        }
        else
        {

            for(i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if(i==j)
                    {
                        s[i][j]='X';
                    }
                    else
                    {
                        s[i][j]='=';
                    }
                }
            }

            cout<<"YES\n";

            for(i=0; i<sz(v); i++)
            {
                int x1,x2;

                x1=i;
                x2=i+1;

                if(x2==sz(v)) x2=0;

                x1=v[x1];
                x2=v[x2];

                s[x1][x2]='+';
                s[x2][x1]='-';
            }

            for(i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {


                    cout<<s[i][j];

                }

                cout<<endl;
            }
        }
    }
    return 0;
}
