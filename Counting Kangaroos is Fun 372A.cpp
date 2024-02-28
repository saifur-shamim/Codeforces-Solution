///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back

int main()
{
    int n,i;
    cin>>n;
    vector <int> v;

    for(i=0; i<n; i++)
    {
        int x;
        cin>>x;

        v.pb(x);
    }

    sort(v.begin(),v.end());

    int j=n/2,ans=n;
    for(i=0; i<n/2; i++)
    {
        for(;;)
        {
            if(v[j]>=2*v[i])
            {
                ans--;
                j++;
                break;
            }
            else
            {
                j++;
            }

            if(j==n)
            {
                break;
            }
        }

        if(j==n)
        {
            break;
        }
    }

    cout<<ans<<nl;
}
