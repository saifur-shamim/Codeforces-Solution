///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{

    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        bool f=true;
        int last=0;

        if(s1[last]=='0')
        {
            while(f==true && last<n-1)
            {
                if(last+1<n-1 && (s1[last+1]=='0' || s2[last+1]=='0' ))
                {
                    last+=1;
                    //cout<<"if executed in while "<<endl<<"last = "<<last<<endl;
                }
                else if(last+1<n && s2[last+1]=='0')
                {
                    last+=1;
                }
                else
                {
                     //cout<<"else executed in while "<<endl<<"last = "<<last<<endl;
                    f=false;
                    break;
                }

            }

            if(f==true) cout<<"YES\n";
            else cout<<"NO\n";
        }
        else
        {
            cout<<"NO\n";
        }


    }

}
