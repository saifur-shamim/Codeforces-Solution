///Bismillahir Rahmanir Rahim

///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define pf push_front

int main()
{
    faster;
    int n,x,i;
    cin>>n>>x;

    vector<int> v;
    int a;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        v.pb(a);
    }

    int cnt=0;

    sort(v.begin(),v.end());

    while(v[(n-1)/2]!=x)
    {
        v.pb(x);
        sort(v.begin(),v.end());

        cnt++;
        n++;
    }

    cout<<cnt<<nl;

}

