///Bismillahir Rahmanir Rahim

///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,a,b,c,d,f;

        cin>>n>>m;
        f=0;
        while(n--)
        {
            cin>>a>>b;
            cin>>c>>d;

            if(b==c) f=1;
        }

        if(m%2==1) f=0;

        if(f) cout<<"YES\n";
        else cout<<"NO\n";

    }

    return 0;
}
