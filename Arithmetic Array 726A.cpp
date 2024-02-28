///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl "\n"
int main()
{
    optimize();
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,a[52],sum=0,i;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum==n) cout<<"0\n";
        else if(sum<=n) cout<<"1\n";
        else cout<<sum-n<<endl;


    }

    return 0;
}
