///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define optimize() ios_base::sync_wtih_stdio(0);cin.tie(0);cout.tie(0);

vector <ll> v;
void func()
{
    ll k=1;
    while(k<=1e9)
    {
        k=(k*10)+1;
        v.pb(k);
    }
}
int main()
{

    func();
    ll t,i;
    cin>>t;

    while(t--)
    {
        ll x;
        cin>>x;

        bool f=false;

        while(x>0 && f!=true)
        {
            for(i=0; i<v.size(); i++)

            {
                if(x%v[i]==0)
                {
                    f=true;
                    break;
                }
            }

            x-=11;
        }


        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}
