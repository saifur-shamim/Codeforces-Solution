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

        ll ar[n+1],sum=0;

        for(i=0; i<n; i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }

        ll div=sum/n;



        ll rem=sum-(div*n);

        ll ans=(n-rem)*rem;

        cout<<ans<<nl;


    }
}
