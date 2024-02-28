///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll x,x1,temp;

        cin>>x;
        temp=x;
label:
        string s=to_string(x);
        ll l=s.size();
        ll i,a,digit=0;

        for(i=0; i<l; i++)
        {
            digit+=s[i]-'0';
        }

        // cout<<"after sum "<<digit<<endl;

        while(x!=0)
        {
            a=x;
            x=digit%x;
            digit=a;
        }
//cout<<"after while loop "<<digit<<endl;
        if(digit==1)
        {
            x=temp+1;
            temp++;
            goto label;
        }

        else
        {
            cout<<temp<<endl;
        }

    }

    return 0;
}
