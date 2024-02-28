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
//   input
/*   0 3
     1 2
     3 1
     2 5
     5 7
*/
int main()
{


    int n;

    cout<<"Enter the total number of process\n";
    cin>>n;
    int ar[n+2],bt[n+2],ct[n+2],tt[n+2],wt[n+2];
    vpi v;
    cout<<"Enter arrival time and burst time of each process\n";
    for(int i=1; i<=n; i++)
    {
        cin>>ar[i]>>bt[i];

        v.PB({ar[i],i});



    }

    sort(all(v));

    int time=0;

    for(int i=0; i<n; i++)
    {

        ct[v[i].S]=time+bt[v[i].S];

        time=ct[v[i].S];

    }


    int ttsum=0,wtsum=0;
    for(int i=1; i<=n; i++)
    {

        tt[i]=ct[i]-ar[i];
        wt[i]=tt[i]-bt[i];
        ttsum+=tt[i];
        wtsum+=wt[i];

    }

    float avgtt=(float) ttsum/n;
    float avgwt=(float) wtsum/n;
    cout<<" average TT = "<<avgtt<<endl;
    cout<<" average WT = "<<avgwt<<endl;

    return 0;
}
