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
typedef vector<pii> vpi;
typedef vector<pll> vpl;

#define PB push_back
#define endl '\n'
#define F first
#define S second
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define MP make_pair
#define all(a) (a).begin(),(a).end()
#define sz(x) (int)x.size()
#define MOD 1000000007
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define sqr(a) ((a)*(a))

const double PI=acos(-1);
const double eps=1e-9;
const int inf=200000000;
const ll infll=9000000000000000000;

int main()
{
    faster;

    int n,i,cand;
    cin>>n;

    vi v1,v2;
    for(i=0; i<n; i++)
    {
        cin>>cand;

        int rt=sqrt(cand);
        int dif1=cand-(rt*rt);
        int dif2=((rt+1)*(rt+1))-cand;

        if(dif1==0)
        {
            if(cand==0)
            {
                v1.PB(2);
            }
            else
            {
                v1.PB(1);
            }
        }
        else
        {
            v2.PB(min(dif1,dif2));
        }
    }

    int cnt1=sz(v1);
    int cnt2=sz(v2);
    ll ans=0;
    if(cnt1==cnt2)
    {
        cout<<"0\n";
    }
    else if(cnt1>cnt2)
    {
        sort(all(v1));
        int k=(cnt1-cnt2)/2;

        for(i=0; i<sz(v1) && k>0; i++)
        {
            ans+=v1[i];
            k--;
        }

        cout<<ans<<endl;
    }
    else
    {
        sort(all(v2));
        int k=(cnt2-cnt1)/2;

        for(i=0; i<sz(v2) && k>0; i++)
        {
            ans+=v2[i];
            k--;
        }

        cout<<ans<<endl;
    }
}

