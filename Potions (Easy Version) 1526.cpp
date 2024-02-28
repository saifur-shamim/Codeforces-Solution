///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'
#define pb push_back

int main()
{
    ll n,i;
    cin>>n;

    ll ar[n+1];

    for(i=0; i<n; i++)
    {
        cin>>ar[i];

    }

    priority_queue<ll> pq;

    ll sum=0,cnt=0;

    for(i=0;i<n;i++)
    {
        sum+=ar[i];
        cnt++;

        if(ar[i]<0) pq.push(-ar[i]);

        while(sum<0)
        {
            sum+=pq.top();
            pq.pop();
            cnt--;
        }
    }

    cout<<cnt<<nl;
}
