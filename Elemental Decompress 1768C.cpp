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

int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1}; //8 direction

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

level:
    while(tc--)
    {

        int n,i;
        cin>>n;

        int ar[n+2],a1[n+2],a2[n+2];

        map<int,int>mp;

        int mx=0;

        map<int,vector<int> > ind;
        for(i=1; i<=n; i++)
        {
            cin>>ar[i];

            mp[ar[i]]++;

            mx=max(mx,mp[ar[i]]);

            ind[ar[i]].PB(i);
        }

        if(mx>=3 or mp[1]==2)
        {
            NO;
            continue;
        }
        else
        {

            queue<int> q;
            int prev=0;
            for(i=1; i<=n; i++)
            {
                if(!mp[i])
                {
                    q.push(i);
                    prev++;
                }
                else
                {
                    if(mp[i]==1)
                    {
                        int pos=ind[i].back();
                        a1[pos]=i;
                        a2[pos]=i;
                        ind[i].pop_back();
                    }
                    else
                    {
                        if(prev!=0)
                        {
                            int val=q.front();

                            q.pop();

                            int pos1=ind[i][0];
                            int pos2=ind[i][1];

                            //cout<<" pos1 = "<<pos1<<endl;
                            //cout<<" pos 2 = "<<pos2<<endl;
                            a1[pos1]=i;
                            a1[pos2]=val;
                            a2[pos1]=val;
                            a2[pos2]=i;

                            //cout<<"i "<<i<<endl;
                           // cout<<" val = "<<val<<endl;

                            prev--;
                        }

                        else
                        {
                            NO;
                            goto level;
                        }
                    }
                }
            }

            YES;

            for(i=1;i<=n;i++)
            {
                cout<<a1[i]<<" ";
            }

            cout<<endl;

            for(i=1;i<=n;i++)
            {
                cout<<a2[i]<<" ";
            }

            cout<<endl;
        }


    }
    return 0;
}

