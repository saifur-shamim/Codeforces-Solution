///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;


#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu ()
{
    cerr << endl;
}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


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

/* 8 Direction
int dx[]= {1,1,0,-1,-1,-1,0,1};
int dy[]= {0,1,1,1,0,-1,-1,-1};
 */
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

        ll n,i;
        cin>>n;

        ll ar[n+2],br[n+2];

        priority_queue<pll> pq;
        priority_queue<pll,vpl,greater<pll>> pq1;


        for(i=1; i<=n; i++)
        {
            cin>>ar[i];

            br[i]=ar[i];

            pq.push({ar[i],i});
            pq1.push({ar[i],i});
        }

        sort(br+1,br+n+1);

        if(br[1]==br[n])
        {
            cout<<"0\n";
            continue;
        }
        else  if(br[1]==1 and br[n]>1)
        {
            cout<<"-1\n";
            continue;
        }
        else
        {

            /*
                cout<<"1st\n";

                while(!pq.empty())
                {
                    auto it=pq.top();
                    pq.pop();
                    cout<<it.F<<" "<<it.S<<endl;
                }

                cout<<"2nd\n";
                while(!pq1.empty())
                {
                    auto it=pq1.top();
                    pq1.pop();
                    cout<<it.F<<" "<<it.S<<endl;
                }

                */

            vpl ans;

            while(1)
            {
                auto it=pq.top();


                auto it1=pq1.top();


                //cout<<" it = "<<it.F<<" "<<it.S<<endl;
                //cout<<" it1 = "<<it1.F<<" "<<it1.S<<endl;
                if(it.F==it1.F or it1.F>it.F)
                {
                    break;
                }
                else if(it.S!=it1.S)
                {
                    pq.pop();
                    ll val=it.F/it1.F;

                    if(it.F%it1.F!=0)
                    {
                        val++;
                    }

                    pq.push({val,it.S});
                    pq1.push({val,it.S});

                    ans.PB({it.S,it1.S});
                }
            }


            cout<<sz(ans)<<endl;

            for(auto it:ans)
            {
                cout<<it.F<<" "<<it.S<<endl;
            }

        }
    }

    return 0;
}

