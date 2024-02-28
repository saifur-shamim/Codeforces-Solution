///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef pair<ll,ll>pl;
typedef vector<pi>vpi;
typedef vector<pl> vpl;

#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define PB push_back
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).size()

int main()
{
    faster;
    int tc;

    cin>>tc;

    while(tc--)
    {
        int a,b,c,d;
        cin>>a>>b>>c;

        int n=2*(abs(a-b));

        if(a<=n && b<=n && c<=n)
        {
            int d1=c+(n/2);

            if(d1<=n)
            {
                cout<<d1<<endl;
            }
            else
            {
                d1=c-(n/2);
                cout<<d1<<endl;
            }
        }
        else
        {
            cout<<"-1\n";
        }
    }
}
