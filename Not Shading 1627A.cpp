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
        int n,m,i,j,r,c;
        cin>>n>>m>>r>>c;

        string s[n];
    int white=0,black=0;
        for(i=0; i<n; i++)
        {
            cin>>s[i];

            for(j=0; j<m; j++)
            {
                if(s[i][j]=='W')
                {
                    white++;
                }
                else
                {
                    black++;
                }
            }


        }

        if(white==n*m)
        {
            cout<<"-1\n";
        }
        else if(s[r-1][c-1]=='B')
        {
            cout<<"0\n";
        }
        else
        {
            int ans=2;

            for(i=0; i<m; i++)
            {
                if(s[r-1][i]=='B')
                {
                    ans=1;
                    break;
                }
            }
            for(i=0;i<n and ans==2;i++)
            {
                if(s[i][c-1]=='B')
                {
                    ans=1;
                    break;
                }
            }

            cout<<ans<<endl;
        }



    }
    return 0;
}
