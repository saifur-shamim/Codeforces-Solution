///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back


int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i,j,l1=0,r1=0,l2=0,r2=0;
        cin>>n;

        vector<pair<pair<ll,ll>,ll>>ar1(n),ar2(n);
        vector<ll> v1,v2;


        for(i=0; i<n; i++)
        {
            ll x;
            cin>>x;

            ar1[i].first.first=x;
            ar2[i].first.second=x;
        }
        for(i=0; i<n; i++)
        {
            ll y;
            cin>>y;


            ar1[i].first.second=y;
            ar2[i].first.first=y;
            ar1[i].second=i+1;
            ar2[i].second=i+1;

        }

        sort(ar1.begin(),ar1.end());

        sort(ar2.begin(),ar2.end());

        ll cnt1=0,cnt2=0;
        for(i=0; i<n; i++)
        {

            if(ar1[i].first.first<=ar1[i].first.second)
            {
                if((ar1[i].first.first)+r1<=ar1[i].first.second)
                {
                    cnt1++;
                    r1=(ar1[i].first.first)+l1;

                    v1.pb(ar1[i].second);
                    v1.pb(l1);
                    v1.pb(r1);
                    l1=r1;
                }
            }

            if(ar2[i].first.first>=ar2[i].first.second)
            {
                if((ar2[i].first.second)+r2<=ar2[i].first.first)
                {
                    cnt2++;
                    r2=(ar2[i].first.second)+l2;

                    v2.pb(ar2[i].second);
                    v2.pb(l2);
                    v2.pb(r2);
                    l2=r2;
                }
            }
        }

        if(cnt1>=cnt2)
        {
            cout<<cnt1<<nl;
            for(i=0; i<v1.size(); i++)
            {
                cout<<v1[i]<<" ";
                if((i+1)%3==0)
                {
                    cout<<nl;
                }
            }
        }

        else
        {
            cout<<cnt2<<nl;
            for(i=0; i<v2.size(); i++)
            {
                cout<<v2[i]<<" ";
                if((i+1)%3==0)
                {
                    cout<<nl;
                }
            }
        }


    }
}
