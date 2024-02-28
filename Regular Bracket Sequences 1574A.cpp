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
const ll infll=9000000000000000000;

int main()
{
    faster;
    int tc;
    cin>>tc;

    while(tc--)
    {
        int n,i;
        cin>>n;

      char s[105];

        int cnt=n,cnt1;

        for(i=0; i<n; i++)
        {
            cnt1=cnt;
            int mx=0;
            for(int j=0; mx<2*n; j++)
            {
                if(cnt1>=1)
                {
                    s[j]='(';
                    s[j+cnt]=')';
                    mx=max(mx,j+cnt);
                }
                else
                {
                    s[j]='(';
                    s[j+1]=')';
                    mx=max(mx,j+1);
                    j++;


                }
                cnt1--;
                if(cnt1==0)
                {
                    j+=cnt;
                }
            }



            for(int k=0;k<2*n;k++)
            {
                cout<<s[k];
            }

            cout<<endl;
             cnt--;
        }
    }
}
