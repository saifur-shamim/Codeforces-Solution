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

    //faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */

    int n,i,k,m;
    cin>>n>>m>>k;

    int ar[n+2],br[m+1];

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    for(i=0; i<m; i++)
    {
        cin>>br[i];
    }

    sort(ar,ar+n);
    sort(br,br+m);

    int cnt=0;
    int j=0;
    i=0;

    while(i<n and j<m)
    {

        if(abs(ar[i]-br[j])<=k)
        {

            cnt++;
            i++;
            j++;
        }
        else if((ar[i]-br[j])>k)
        {

            j++;
        }
        else
        {

            i++;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
