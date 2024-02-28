///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,ar[302],i;

        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        vector <ll> v;

        ll half=n/2,j;

        for(i=0,j=n-1;i<half && j>=half;i++,j--)
        {
            v.push_back(ar[i]);
            v.push_back(ar[j]);
        }

        if(n%2)
        {
            v.push_back(ar[half]);
        }

        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }

        cout<<endl;
    }

    return 0;
}

