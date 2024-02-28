///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back




int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,l,r,i,x;


        cin>>n>>l>>r;

        vector<ll> v;

        for(i=0; i<n; i++)
        {
            cin>>x;

            v.pb(x);
        }

        sort(v.begin(),v.end());

        ll a,b,dis2,dis1,cnt=0;

        for(i=0; i<n; i++)
        {
            a=l-v[i];
            auto lw=lower_bound(v.begin(),v.end(),a);
            dis1=distance(v.begin(),lw);
            if(dis1<=i) dis1=i+1;
            b=r-v[i];
            auto up=upper_bound(v.begin(),v.end(),b);
            dis2=distance(v.begin(),up);
            if(dis2<=i) dis2=i+1;
            cnt+=dis2-dis1;
        }


        cout<<cnt<<endl;

    }

    return 0;
}
