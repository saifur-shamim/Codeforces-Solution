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
        ll n,k;

        cin>>n>>k;

        if(n%k==0)
        {
            cout<<"1\n";
        }

        else if(k/n>0)
        {
            cout<<(n+k-1)/n<<endl;
        }

        else
        {
            cout<<"2\n";
        }
    }


    return 0;
}
