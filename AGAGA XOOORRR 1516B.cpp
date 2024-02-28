///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int pre[n];
    pre[0]=arr[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=(pre[i-1]^arr[i]);
    }
    bool flag=0;


    for(int i=0; i<n-1; i++)
    {
        if(pre[i]==(pre[n-1]^pre[i]))
        {
            //dbg(i);
            flag=1;
            break;
        }

    }



    for(int i=0; i<n-2; i++)
    {
        int st=pre[i];
        for(int j=i+1; j<n-1; j++)
        {
            int mid=pre[j]^pre[i];
            int en=pre[n-1]^pre[j];
            if(st==mid and mid==en)
            {
                //dbg(i,j);
                flag=1;
                break;
            }
        }
        if(flag)break;
    }


    if(flag)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    cout<<endl;
}

int main()
{

    faster;

    int tc;
    cin>>tc;

    while(tc--)
    {
        solve();
    }
    return 0;
}

