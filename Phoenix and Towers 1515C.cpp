///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,m,x,i;
        cin>>n>>m>>x;

        vector<pair<ll,ll> >v;
        priority_queue<pair<ll,ll> ,vector<pair<ll,ll> >, greater<pair<ll,ll> > > pq;


        for(i=0; i<n; i++)
        {
            ll h;
            cin>>h;

            v.push_back({h,i});
        }

        sort(v.begin(),v.end());

        ll z=n-m;
        ll twr=1;
        map<ll, ll> mp;

        for(i=n-1; i>=z; i--)
        {
            ll f=v[i].first;
            ll s=v[i].second;
            pq.push({f,twr});
            mp[s]=twr;
            twr++;
        }

        for(i=z-1; i>=0; i--)
        {
            ll f=v[i].first;
            ll s=v[i].second;
            ll l=pq.top().first;
            ll r=pq.top().second;

            mp[s]=r;
            ll sum=f+l;
            pq.pop();
            pq.push({sum,r});
        }

        ll mn=INT_MAX;
        ll mx=INT_MIN;

        while(!pq.empty())
        {
            ll tp=pq.top().first;

            mn=min(mn,tp);
            mx=max(mx,tp);
            pq.pop();
        }

        if(mx-mn>x)
        {
            cout<<"No\n";
        }
        else
        {
            cout<<"YES\n";
            for(i=0; i<n; i++)
            {
                cout<<mp[i]<<" ";
            }

            cout<<nl;
        }
    }

    return 0;
}
