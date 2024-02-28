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

#define Lim 300005
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,k,i,arr[Lim];
        set<ll> s;
        cin >> n >> k;
        ll mx = 0;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
            mx = max(mx, arr[i]);
        }
        sort(arr,arr+n);
        ll mex;
        for(i = 0; i < n; i++)
        {
            if(arr[i] != i)
            {
                mex = i;
                break;
            }
        }
        if(i == n) mex = n;
        if(k == 0)
        {
            cout << n << endl;
        }
        else if(mx+1 == mex)
        {
            cout << n + k << endl;
        }
        else
        {
            ll temp = s.size();
            s.insert((mx+mex+1)/2);
            if(temp == s.size()) cout << n << endl;
            else cout << n+1 << endl;
        }
        s.clear();
    }


}
