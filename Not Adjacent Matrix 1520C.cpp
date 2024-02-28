///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n;
        cin>>n;

        if(n==1)
        {
            cout<<"1\n";
        }
        else if(n==2)
        {
            cout<<"-1\n";
        }
        else
        {
            ll a[n][n];

            ll x=1;
            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    a[i][j]=x;
                    x++;
                }
            }

            for(ll i=0; i<n-1; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    if(j%2==1)
                    {
                        swap(a[i][j],a[i+1][j]);
                    }
                }
            }

            for(ll i=0; i<n; i++)
            {
                for(ll j=0; j<n; j++)
                {
                    cout<<a[i][j]<<" ";
                }

                cout<<nl;
            }
        }
    }
}
