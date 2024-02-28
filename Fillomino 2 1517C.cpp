///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdiO(0);cin.tie(0);cout.tie(0);
#define nl '\n'

int main()
{
    ll n,i,j;
    cin>>n;

    ll ar[n][n];
    memset(ar,0,sizeof(ar));

    for(i=0; i<n; i++)
    {
        ll x,a,b,y;
        cin>>x;

        a=i;
        b=i;
        y=x;

        while(x--)
        {
            ar[a][b]=y;

            if(b!=0 && ar[a][b-1]==0) b--;
            else a++;
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
        {
            cout<<ar[i][j]<<" ";
        }

        cout<<nl;
    }

    return 0;
}
