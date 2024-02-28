///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    int n,i;
    cin>>n;

    int ar[n+2];

    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }

    ll sum=0;
    int cnt=0;
    priority_queue<int> pq;

    for(i=0; i<n; i++)
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
