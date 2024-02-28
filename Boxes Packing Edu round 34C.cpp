///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx=5e3+124;
int a[mx];

int main()
{
    int n;
    cin>>n;

    map<int,int>freq;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

        freq[a[i]]++;
    }

    int ans=0;

    for(int i=0; i<n; i++)
    {
        ans=max(ans,freq[a[i]]);
    }

    cout<<ans<<endl;

    return 0;
}
