///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define mod 1000000007

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n;
        cin>>n;

        ll ar[n+1],i;

        for(i=1; i<=n; i++) ar[i]=i;

        if(n%2==0)
        {
            for(i=1; i<=n; i+=2)
            {
                swap(ar[i],ar[i+1]);
            }
        }
        else
        {
            for(i=1; i<=n-3; i+=2)
            {
                swap(ar[i],ar[i+1]);
            }

            ll a=ar[n-2];
            ll b=ar[n-1];
            ll c=ar[n];

            ar[n]=a;
            ar[n-1]=c;
            ar[n-2]=b;
        }

        for(i=1; i<=n; i++)
        {
            cout<<ar[i]<<" ";
        }

        cout<<nl;
    }

    return 0;
}
