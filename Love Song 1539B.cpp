///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n,q,i,l,r,len;
    cin>>n>>q;

    string s;

    cin>>s;

    vector<ll> v(n+1);
    ll sum=0;
    v[0]=sum;

    for(i=1; i<=n; i++)
    {
        sum+=s[i-1]-'a'+1;
        v[i]=sum;
    }

    while(q--)
    {
        cin>>l>>r;

        cout<<v[r]-v[l-1]<<endl;
    }

    return 0;
}
