#include<bits/stdc++.h>

#define ll long long 
#define endl '\n'

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 


	int tc;
	cin>>tc;

	while(tc--)
	{
		ll n,k,i;
		cin>>n>>k;

		ll ar[n+2];
        
        for(i=0;i<n;i++)
        {
        	cin>>ar[i];
        }

        sort(ar,ar+n);

        ll ans=0,cnt=k,pos=n;

        for(i=n-1;i>=0 and cnt>0;i--,cnt--)
        {
        	ans+=ar[i-k]/ar[i];
        	pos=i-k;
        }

        for(i=pos-1;i>=0;i--)
        {
        	ans+=ar[i];
        }

        cout<<ans<<endl;
	}
}