///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll x1,x2,x3,y1,y2,y3,ans;

        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        ans=abs(x1-x2)+abs(y1-y2);

        if(y1==y2 && y1==y3)
        {
            if(x3>=min(x1,x2) && x3<=max(x2,x1)) ans+=2;
        }
        else if(x1==x2 && x1==x3)
        {
            if(y3>=min(y1,y2) && y3<=max(y1,y2)) ans+=2;
        }

        cout<<ans<<nl;
    }
}
