///Bismillahir Rahmanir Rahim
///Happy Coding
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster;
    int r,g,b,ans1=0,ans2=0,ans3=0;

    cin>>r>>g>>b;

    ans1=r/3 + g/3 + b/3;

    int rem1=r%3;
    int rem2=g%3;
    int rem3=b%3;

    int mn=min(rem1,min(rem2,rem3));

    ans1+=mn;

    if(r!=0 && b!=0 && g!=0)
    {
        int mx=max(rem1,max(rem2,rem3));

        ans2=mx;
        ans2+=(r-mx)/3;
        ans2+=(g-mx)/3;
        ans2+=(b-mx)/3;
    }


    int mn1=min(r,min(g,b));

    ans3=mn1;
    ans3+=(r-mn1)/3 + (g-mn1)/3 + (b-mn1)/3;

    cout<<max(ans1,max(ans2,ans3))<<nl;
}
