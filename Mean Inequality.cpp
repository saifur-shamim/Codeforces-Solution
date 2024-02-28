///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define optimize() ios_base::sync_wtih_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n,i,j,a[52];
        cin>>n;

        for(i=0; i<2*n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+(2*n));

        vector<int> v;

        for(i=0,j=2*n-1;i<n,j>=n; i++,j--)
        {
            v.push_back(a[j]);
            v.push_back(a[i]);
        }

        for(auto u:v)
        {
            cout<<u<<" ";
        }

        cout<<endl;
        v.clear();
    }

    return 0;
}
