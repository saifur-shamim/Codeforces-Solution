///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef  long long ll;
typedef  long int li;
typedef  double dl;
typedef  vector<int> vi;
typedef  vector<ll> vl;
typedef  pair<int,int> pii;
typedef  pair<ll,ll> pll;
typedef  vector<pii>vpi;
typedef  vector<pll> vpl;

#define     PB        push_back
#define     MP        make_pair
#define     F         first
#define     S         second
#define     sz(x)     (int)x.size()
#define     all(a)    (a).begin(),(a).end()
#define     faster    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define     endl      '\n'
#define     mem(a,b)  memset(a,b,sizeof(a))
#define     mod       1000000007
#define     gcd(a,b)  __gcd(a,b)
#define     pf        printf
#define     YES       cout<<"YES\n"
#define     Yes       cout<<"Yes\n"
#define     NO        cout<<"NO\n"
#define     No        cout<<"No\n"

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;

int main()
{

    faster;
    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */
    int tc;
    cin>>tc;

    while(tc--)
    {

        int n,i;
        cin>>n;



        int od=0,ev=0;

        vi odd,evn;

        for(i=0; i<n; i++)
        {
            int a;
            cin>>a;

            if(a%2)
            {
                od++;
                odd.PB(a);
            }
            else
            {
                ev++;
                evn.PB(a);
            }
        }


        if(od%2==0)
        {
            cout<<"0\n";
        }
        else
        {
            vi v1,v2;

            for(i=0; i<sz(odd); i++)
            {
                int a=odd[i];

                int cnt=0;
                while(a)
                {
                    a/=2;
                    cnt++;

                    if(a%2==0)
                    {
                        break;
                    }
                }

                v1.PB(cnt);
            }

            for(i=0; i<sz(evn); i++)
            {
                int a=evn[i];

                int cnt=0;
                while(a)
                {
                    a/=2;
                    cnt++;

                    if(a%2==1)
                    {
                        break;
                    }
                }

                v2.PB(cnt);
            }

            sort(all(v1));
            sort(all(v2));

            int ans=INT_MAX;

            if(!v1.empty())
            {
                ans=v1[0];
            }

            if(!v2.empty())
            {
                ans=min(ans,v2[0]);
            }

            cout<<ans<<endl;
        }

    }
    return 0;
}
