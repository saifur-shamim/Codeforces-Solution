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
    faster;
    ll n,r,avg,i;
    cin>>n>>r>>avg;

    int ar[n+2],br[n+2];

    ll sum=0;
    vector<pair<int,int>>v;
    for(i=1; i<=n; i++)
    {
        cin>>ar[i]>>br[i];
        sum+=ar[i];

        if(ar[i]<r)
        {
            v.pb({br[i],ar[i]});
        }
    }

    if(sum>=(avg*n))
    {
        cout<<"0\n";
    }
    else
    {
        sort(v.begin(),v.end());

        i=0;
        ll cnt=0;
        while(sum<(avg*n) && i<v.size())
        {
            //cout<<"i = "<<i<<nl;
            ll left=v[i].first;
            //cout<<"left = "<<left<<nl;
            ll right=v[i].second;
            //cout<<"right = "<<right<<nl;
            ll mx=min(r-right,(avg*n)-sum);
            //cout<<"mx = :"<<mx<<nl;
            cnt+=mx*left;
            //cout<<"cnt = "<<cnt<<nl;
            sum+=mx;
            //cout<<"sum = "<<sum<<nl;
            i++;
        }

        cout<<cnt<<nl;
    }
}
