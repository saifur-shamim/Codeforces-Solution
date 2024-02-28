///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;


#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     endl      '\n'
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"



int main()
{


    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;

        int ar[n+2];


        for(i=1;i<=n;i++)
        {
            cin>>ar[i];

        }
        bool f=true;
        for(i=2;i<=n;i++)
        {
            if(ar[i]%ar[1])
            {
                f=false;
                break;
            }
        }

        if(f) YES;
        else NO;
    }

    return 0;
}
