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
        int n,a[102],i,mn=2e9;
        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            mn=min(mn,a[i]);
        }



        int cnt=0;

        for(i=0;i<n;i++)
        {
            if(a[i]>mn) cnt++;
        }

        cout<<cnt<<endl;
    }

    return 0;
}
