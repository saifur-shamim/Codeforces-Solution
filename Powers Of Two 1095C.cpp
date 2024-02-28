///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int n,k,i;
    cin>>n>>k;

    int ar[k+1];
    fill(ar,ar+(k+1),1);

    int sum=k;

    for(i=1; i<=k; i++)
    {
        while(sum+ar[i]<=n)
        {
            sum+=ar[i];

            ar[i]*=2;
        }
    }

    if(sum!=n) cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(i=1; i<=k; i++)
        {
            cout<<ar[i]<<" ";
        }
    }
}
