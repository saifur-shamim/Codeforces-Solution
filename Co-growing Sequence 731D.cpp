///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000009
#define pb push_back
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+1];

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
        }

        vector<ll> ans;
        ans.pb(0);

        ll x1,x2=ar[0];

        for(i=1; i<n; i++)
        {
            x1=x2;
            ll f=0;
            ll j=1;

            ll xx=ar[i];
            while(x1)
            {
                ll z=(x1&1);
                ll y=(ar[i]&1);

                if(z==1 && y!=1)
                {
                    f+=j;
                }

                j*=2;

                x1=x1>>1;
                ar[i]=ar[i]>>1;
            }

            x2=xx^f;
            ans.pb(f);
        }

        for(i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<nl;
    }
}
