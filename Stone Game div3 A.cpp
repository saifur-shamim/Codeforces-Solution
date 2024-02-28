///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define lli long long
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    lli tc;
    cin>>tc;

    while(tc--)
    {
        lli n,i,ar[102];

        cin>>n;

        for(i=0;i<n;i++) cin>>ar[i];

        lli ll,lg,rl,rg,a,b,c,d;

        ll=find(ar,ar+n,1)-ar;
        lg=find(ar,ar+n,n)-ar;

        ll++;
        lg++;

        rl=n-ll+1;
        rg=n-lg+1;

        a=min(ll,rl);
        b=min(lg,rg);
        c=max(ll,lg);
        d=max(rl,rg);

        cout<<min(a+b,min(c,d))<<endl;
    }
}
