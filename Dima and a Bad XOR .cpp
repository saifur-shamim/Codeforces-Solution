///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'
#define mod 100000007
#define pb push_back

int main()
{
    int n,m,i;
    cin>>n>>m;

    int ar[n+1][m+1],temp[n+1];
    memset(temp,0,sizeof(temp));

    for(i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>ar[i][j];
        }
    }

    int ans=0;

    for(i=0;i<n;i++)
    {
        ans=ans^ar[i][0];

        for(int j=1;j<m;j++)
        {
            if(ar[i][0]!=ar[i][j])
            {
                temp[i]=j+1;
            }
        }
    }

    if(ans!=0)
    {
        cout<<"TAK\n";

        for(i=0;i<n;i++)
        {
            cout<<1<<" ";
        }
        cout<<nl;
        return 0;
    }

    vector<int> v;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(flag==0 && temp[i]!=0)
        {
            v.pb(temp[i]);
            flag=1;
        }
        else
        {
            v.pb(1);
        }
    }

    if(flag==0)
    {
        cout<<"NIE\n";
    }
    else
    {
        cout<<"TAK\n";

        for(auto it:v)
        {
            cout<<it<<" ";
        }
    }

    return 0;
}
