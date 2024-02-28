///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll x1,x2,y1,y2,ans;

        cin>>x1>>y1>>x2>>y2;

        ans=(x2-x1)*(y2-y1) + 1;


        cout<<ans<<endl;
    }

    return 0;
}
