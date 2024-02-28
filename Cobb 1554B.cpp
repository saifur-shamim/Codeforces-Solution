///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,k,i;
        cin>>n>>k;

        ll ar[n+2];
        for(i=1;i<=n;i++)
        {
            cin>>ar[i];
        }

        ll ans=-1e18;

        for(i=n;i>=1;i--)
        {
            ll cnt=0;
            for(ll j=i-1;j>=1;j--)
            {
                ll k1=i*j-k*(ar[i]|ar[j]);
                ans=max(ans,k1);
                cnt++;

                if(cnt>100)
                {
                    break;
                }
            }
        }

        cout<<ans<<endl;
    }
}
