///Bismillahir Rahmanir Rahim
///Happy Coding
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000009
#define pb push_back

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,m,k,i,j;

        cin>>k>>n>>m;

        ll a[n+1],b[m+1];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<m; i++)
        {
            cin>>b[i];
        }

        ll lines=k,flag=0;
        i=0,j=0;

        vector<ll> ans;

        while(n>i || m>j)
        {
           // cout<<"i = "<<i<<" n = "<<n<<nl;
           // cout<<"j = "<<j<<" m = "<<m<<nl;

            if(a[i]==0 && i<n)
            {
                ans.pb(0);
                lines++;
                i++;

                //cout<<"1st condition "<<"i = "<<i<<"lines = "<<lines<<nl;
            }
            else if(b[j]==0 && j<m)
            {
                ans.pb(0);
                lines++;
                j++;
                //cout<<"2nd condition "<<"j = "<<j<<"lines = "<<lines<<nl;
            }
            else if(a[i]<=lines && a[i]!=0 && i<n)
            {
                ans.pb(a[i]);
                i++;
                //cout<<"3rd condition "<<"i = "<<i<<"lines = "<<lines<<nl;
            }
            else if(b[j]<=lines && b[j]!=0 && j<m)
            {
                ans.pb(b[j]);
                j++;
                //cout<<"4th condition "<<"j = "<<j<<"lines = "<<lines<<nl;
            }
            else
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            cout<<"-1\n";
        }
        else
        {
            for(i=0; i<ans.size(); i++)
            {
                cout<<ans[i]<<" ";
            }

            cout<<nl;
        }

        ans.clear();
    }

    return 0;
}
