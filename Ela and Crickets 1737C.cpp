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
        int n,i;
        cin>>n;

        map<int,int>row,col;

        for(i=0; i<3; i++)
        {
            int r,c;
            cin>>r>>c;

            row[r]++;
            col[c]++;
        }

        int x,y;
        cin>>x>>y;

        int x1,y1;

        for(auto it:row)
        {
            if(it.S==2)
            {
                x1=it.F;
            }
        }

        for(auto it:col)
        {
            if(it.S==2)
            {
                y1=it.F;
            }
        }

        if((x1==1 and y1==1) or (x1==1 and y1==n) or (x1==n and y1==1) or (x1==n and y1==n))
        {
            if(x1==x or y==y1) YES;
            else NO;
        }
        else
        {
            if(x1%2==x%2 or y1%2==y%2) YES;
            else NO;
        }
    }
    return 0;
}
