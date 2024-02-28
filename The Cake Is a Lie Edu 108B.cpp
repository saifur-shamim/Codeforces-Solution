///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll n,m,k,ans1,ans2;

        cin>>n>>m>>k;

        ans1=(m-1)*1 + (n-1)*m;
        ans2=(n-1)*1 + (m-1)*n;

        if(k==ans1 || k==ans2) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
