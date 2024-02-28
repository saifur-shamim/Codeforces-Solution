///Bismillahir Rahmanir Rahim
///Happy Coding
#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define nl '\n'

int main()
{
    ll tc;
    cin>>tc;

    while(tc--)
    {
        ll n,a,b,i;
        cin>>n>>a>>b;


        if(n==1 || b==1 || n%b==1)
        {
            cout<<"Yes\n";
        }
        else if(a==1)
        {
            if(n%b==1)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else
        {
            i=0;
            bool f=false;
            while(pow(a,i)<=n)
            {
                ll x=n-pow(a,i);

                if(x%b==0)
                {
                    f=true;
                    break;
                }

                i++;
            }

            if(f==true) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}
