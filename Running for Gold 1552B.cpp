
///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        int  n,i;
        cin>>n;
        int ar[n+1][6];

        for(i=1; i<=n; i++)
        {
            for(int j=1; j<=5; j++)
            {
                cin>>ar[i][j];
            }
        }

        int f=1;

        for(i=2; i<=n; i++)
        {
            int sum=0;
            for(int j=1; j<=5; j++)
            {
                if(ar[f][j]>ar[i][j]) sum++;
            }

            if(sum>=3)
            {
                f=i;
            }
        }

        int flag=1;

        for(i=1; i<=n; i++)
        {
            int sum=0;
            if(i!=f)
            {
                for(int j=1; j<=5; j++)
                {
                   if(ar[f][j]>ar[i][j]) sum++;
                }
            }

            if(sum>=3)
            {
                flag=0;
                break;
            }
        }

        if(flag==1) cout<<f<<nl;
        else cout<<"-1\n";
    }
}
