///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n,i;
        string x;
        cin>>n>>x;

        string a(n,'0'),b(n,'0');

        for(i=0; i<n; i++)
        {
            if(x[i]=='1')
            {
                a[i]='1';
                b[i]='0';

                for(int j=i+1; j<n; j++)
                {
                    b[j]=x[j];
                }

                break;
            }

            else
            {
                a[i]=b[i]='0'+(x[i]-'0')/2;
            }
        }

        cout<<a<<endl<<b<<endl;
    }

    return 0;
}
