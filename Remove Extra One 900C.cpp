///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define nl '\n'

const int maxn=1e5+7;

int num[maxn];
int cnt[maxn];

int main()
{
    int n,i;
    cin>>n;

    int m1=0,m2=0;

    for(i=1;i<=n;i++)
    {
        cin>>num[i];

        if(num[i]>m1)
        {
            m2=m1;
            m1=num[i];
            cnt[num[i]]--;
        }
        else if(num[i]>m2)
        {
            m2=num[i];
            cnt[m1]++;
        }

    }

    int ans=1;

    for(i=2;i<=n;i++)
    {
        if(cnt[i]>cnt[ans])
        {
            ans=i;
        }
    }

    cout<<ans<<nl;

    return 0;
}
