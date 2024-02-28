///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007
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

        sort(ar,ar+n);

        ll j,k,mn=INT_MAX;

        for(i=0; i<n-1; i++)
        {
            if(ar[i+1]-ar[i]<mn)
            {
                mn=ar[i+1]-ar[i];
                j=i;
                k=i+1;
            }
        }
        if(n==2)
        {
            cout<<ar[0]<<" "<<ar[1]<<nl;
        }
        else
        {
            for(i=k; i<n; i++)
            {
                cout<<ar[i]<<" ";
            }
            for(i=0; i<=j; i++)
            {
                cout<<ar[i]<<" ";
            }

            cout<<nl;
        }

    }
}
