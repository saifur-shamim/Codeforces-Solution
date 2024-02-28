///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
    ll tc;

    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+2],ans=0;

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
        }

        for(i=2; i<=n; i++)
        {
            ll z=i+i-1;

            if(ar[i]>z) continue;

            ll x=(z%ar[i])+1;
            ll y=i-x;

            while(y>=1)
            {
                if(y+i==ar[i]*ar[y]) ans++;
                y-=ar[i];
            }
        }
        cout<<ans<<nl;
    }
}
