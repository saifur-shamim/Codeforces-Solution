///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define sz 2005

bool ispartition(ll ar[], ll n,ll sum)
{
    ll i,j;

    bool part[n+1][sum+1];

    for(i=0; i<=n; i++)
    {
        part[i][0]=true;
    }

    for(i=1; i<=sum; i++)
    {
        part[0][i]=false;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=sum; j++)
        {
            if(j<ar[i-1])
            {
                part[i][j]=part[i-1][j];
            }
            else{
                part[i][j]=part[i-1][j] || part[i-1][j-ar[i-1]];
            }
        }
    }

    return part[n][sum];
}

bool solve(ll ar[],ll n)
{

    ll i,j,sum=0;

    for(i=0; i<n; i++)
    {
        sum+=ar[i];
    }

    if(sum%2!=0)
    {
        return false;
    }

    return ispartition(ar,n,sum/2);
}
int main()
{
    ll n,i,ar[sz];
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    if(solve(ar,n)==true)
    {
        ll ans=-1;



        for(i=0; i<n; i++)
        {
            ll ar2[n+2],k=0;

            for(ll j=0; j<n; j++)
            {
                if(i==j) continue;

                ar2[k]=ar[j];
                k++;
            }

            if(solve(ar2,k)==false)
            {
                ans=i;
                break;
            }
        }

        cout<<1<<nl;
        cout<<ans+1<<nl;
    }
    else
    {
        cout<<"0\n";
    }

    return 0;
}
