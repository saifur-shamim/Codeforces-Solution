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

const int Lim=2e5+13;
const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;
int ar[Lim];


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

        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }

        int mex=0;
        vi v;
        while(mp[mex]>0)
        {
            mex++;
        }

        for(i=0;i<n;i++)
        {
            if(mex==0)
            {
                for(int j=i;j<n;j++)
                {
                    v.PB(0);
                }
                break;
            }

            map<int,int>mp1;

            while(sz(mp1)!=mex and i<n)
            {
                if(ar[i]<mex) mp1[ar[i]]++;
                mp[ar[i]]--;
                i++;
            }

            i--;
            v.PB(mex);
            mex=0;

            while(mp[mex]>0)
            {
                mex++;
            }
        }

        cout<<sz(v)<<endl;

        for(auto it:v)
        {
            cout<<it<<" ";
        }

        cout<<endl;
    }
    return 0;
}
