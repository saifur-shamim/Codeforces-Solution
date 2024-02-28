#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back
int main()
{
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i,k;
        cin>>n>>k;
        int ar[n+2];

        vector<pair<int,int> > v;

        for(i=1; i<=n; i++)
        {
            cin>>ar[i];
            v.pb({ar[i],i});
        }

        sort(v.begin(),v.end());

        int cnt=1;

        for(i=0;i<v.size()-1;i++)
        {
            if((v[i+1].second-v[i].second)==1)
            {
                continue;
            }
            else{
                cnt++;
            }

        }
       if(cnt<=k)
       {
           cout<<"Yes\n";
       }
       else{cout<<"No\n";}
    }
}
