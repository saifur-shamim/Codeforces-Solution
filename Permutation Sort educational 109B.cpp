///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a[52],i,f=0;

        cin>>n;

        for(i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        for(i=1; i<=n; i++)
        {
            if(a[i]!=i) f=1;
        }

        if(f==0) cout<<"0\n";
        else if(a[1]==1 || a[n]==n) cout<<"1\n";
        else if(a[1]!=n || a[n]!=1) cout<<"2\n";
        else cout<<"3\n";


    }

    return 0;
}
