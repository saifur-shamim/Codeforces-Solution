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

//#define PB push_back
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
    faster;
    int tc;

    cin>>tc;

label:
    while(tc--)
    {
        int n,i,j;
        cin>>n;

        vector <vi>v(7);
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=5; j++)
            {
                int x;
                cin>>x;

                if(x==1)
                {
                    v[j].push_back(i);
                }
            }
        }

        /*for(i=1;i<=5;i++)
        {
            cout<<"size of v["<<i<<"] = "<<sz(v[i])<<endl;
            for(auto it : v[i])
            {
                cout<<it<<" ";
            }

            cout<<endl;


        }*/

        for(i=1; i<=5; i++)
        {

            //cout<<"again size of v["<<i<<"] = "<<v[i].size()<<endl;

            if(sz(v[i])>=n/2)
            {


                for(j=1; j<=5; j++)
                {
                    int cnt=0;
                    if(i!=j && sz(v[j])>=n/2)
                    {
                        for(int k=0; k<sz(v[i]); k++)
                        {


                            for(int t=0; t<sz(v[j]); t++)
                            {
                                if((sz(v[i])==n && (sz(v[j])==n || sz(v[j])>=n/2)) || (sz(v[j])==n && (sz(v[i])==n || sz(v[i])>=n/2)))
                                {
                                    cout<<"YES\n";
                                    goto label;
                                }
                                else if(v[i][k]==v[j][t])
                                {
                                    cnt++;
                                    break;
                                }
                            }


                        }


                        if(sz(v[j])-cnt>=n/2)
                        {
                            cout<<"YES\n";

                            goto label;
                        }

                    }
                }
            }

        }
        cout<<"NO\n";
    }

    return 0;
}
