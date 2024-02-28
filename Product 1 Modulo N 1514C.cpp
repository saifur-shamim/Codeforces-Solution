///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define mod 1000000007
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll n,i;
    cin>>n;

    vector <ll> v;
    for(i=1; i<=n; i++)
    {
        if(__gcd(n,i)==1)
        {
            v.push_back(i);
        }
    }

    ll m=1;

    for(i=0; i<v.size(); i++)
    {
        m=(m*v[i])%n;
    }

    if(m==1)
    {
        cout<<v.size()<<nl;

        for(i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
    }
    else
    {
        cout<<v.size()-1<<nl;
        for(i=0; i<v.size(); i++)
        {
            if(v[i]!=m)
            {
                cout<<v[i]<<" ";
            }
        }
    }

    return 0;
}
