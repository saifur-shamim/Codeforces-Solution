#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int tc;
    cin>>tc;

    vector<int> v[5];

    v[1].push_back(1);
    v[1].push_back(2);

    cout<<v.size()<<nl;
    while(tc--)
    {
        int n,i;
        cin>>n;

        int ar[n+1];

        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        sort(ar,ar+n);

        ll sum=0;

        for(i=0;i<n-1;i++)
        {
            sum+=ar[i];
        }

        double ans=(double) ar[n-1] + double(sum)/(n-1);

        //cout<<ans<<nl;
        printf("%lf\n",ans);
    }
}
