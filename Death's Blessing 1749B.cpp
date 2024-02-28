#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define nl endl

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+2]= {0},br[n+2]= {0};

        vector< pair<ll,ll> > v;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }

        for(i=1; i<=n; i++)
        {
            cin>>br[i];
            v.PB({br[i],ar[i]});
        }

        sort(v.begin(),v.end());

        ll ans=0;
        ll last=0;
        for(auto it:v)
        {
            ans+=ar[it.S]+last;

            last=it.F;
        }

        cout<<ans<<endl;
    }
}
