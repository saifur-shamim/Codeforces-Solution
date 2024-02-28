///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define pb push_back
int main()
{

    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i,a[102],b[102],sumi=0,sumj=0;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            cin>>b[i];
        }

        vector<ll> indi,indj;

        for(i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                sumj+=b[i]-a[i];
                ll k=b[i]-a[i];

                while(k>0)
                {
                    indj.pb(i+1);
                    k--;
                }
            }
            else if(a[i]>b[i])
            {
                sumi+=a[i]-b[i];

                ll k=a[i]-b[i];

                while(k>0)
                {
                    indi.pb(i+1);
                    k--;
                }
            }
        }

        if(sumi!=sumj)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<sumi<<nl;

            for(i=0; i<indi.size(); i++)
            {
                cout<<indi[i]<<" "<<indj[i]<<nl;
            }
        }
    }
}
