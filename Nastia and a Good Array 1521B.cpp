///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int>pi;
typedef pair<ll,ll>pl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);



int main()
{
    optimize();
    int tc;
    cin>>tc;

    while(tc--)
    {
        ll n,i;
        cin>>n;

        ll ar[n+2];
        ll x=1999999973;
        ll y=1999999943;
        for(i=0; i<n; i++) cin>>ar[i];

        cout<<n-1<<endl;

        for(i=0; i<n-1; i++)
        {
            if(i%2==0)
            {
                cout<<i+1<<" "<<i+2<<" "<<x<<" "<<min(ar[i],ar[i+1])<<endl;
                ar[i+1]=min(ar[i],ar[i+1]);
            }

            else
            {
                cout<<i+1<<" "<<i+2<<" "<<y<<" "<<min(ar[i],ar[i+1])<<endl;
                ar[i+1]=min(ar[i],ar[i+1]);
            }
        }
    }
}
