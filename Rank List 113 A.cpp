///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n,k;

    cin>>n>>k;

    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i].first>>v[i].second;

        v[i].first*=-1;
    }

    sort(v.begin(),v.end());
    int ans=0;
    for(auto u: v)
    {
        if(u==v[k-1]) ans++;
    }

    cout<<ans<<endl;

    return 0;
}
