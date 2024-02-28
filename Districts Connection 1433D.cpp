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

        int a;
        map<int,int>mp;

        map<int,vector<int> > mp1;

        int mx=0;
        for(i=1; i<=n; i++)
        {
            cin>>a;

            mp[a]++;
            mx=max(mx,mp[a]);

            mp1[a].PB(i);
        }


        if(mx<n)
        {
            vpi v;

            int cnt=0;
            int val;
            for(auto it:mp1)
            {
                if(cnt==0)
                {
                    val=mp1[it.F][0];
                }
                else
                {
                    for(int j=0; j<sz(mp1[it.F]); j++)
                    {
                        int mn,mx;
                        mn=min(val,mp1[it.F][j]);
                        mx=max(val,mp1[it.F][j]);
                        v.PB({mn,mx});
                    }
                }
                cnt++;
            }


            if(sz(v)!=n-1)
            {
                cnt=0;
                vi ind;
                for(auto it:mp1)
                {
                    if(cnt==0)
                    {
                        for(int j=1; j<sz(mp1[it.F]); j++)
                        {
                            ind.PB(mp1[it.F][j]);
                        }

                    }

                    else
                    {
                        int s=sz(mp1[it.F]);
                        int j=0;
                        while(!ind.empty())
                        {
                            int mn,mx;
                            mn=min(ind.back(),mp1[it.F][j]);
                            mx=max(ind.back(),mp1[it.F][j]);
                            v.PB({mn,mx});
                            ind.pop_back();

                            j++;
                            if(j==s) j=0;

                        }



                        if(sz(ind)==0)
                        {
                            break;
                        }
                    }

                    cnt++;

                }

            }

            YES;
            for(auto it:v)
            {
                cout<<it.F<<" "<<it.S<<endl;
            }
        }
        else{NO;}

    }

}
