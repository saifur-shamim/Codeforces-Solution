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

        string s;
        cin>>s;



        bool f=0;
        string s1,s2;
        for(ll i=0 ; i<sz(s) ; i++)
        {
            ll d = s[i]-'0';

            if(d & 1)
            {
                if(f==0)
                {
                    ll ch=d/2;
                    s1+=(ch+1)+'0';
                    s2+=(ch+'0');
                    f=1;
                }
                else
                {
                    ll ch=d/2;
                    s2+=(ch+1)+'0';
                    s1+=(ch+'0');
                    f=0;
                }
            }
            else
            {
                //cout<<"else "<<d<<endl;
                s1+=(d/2+'0');
                s2+=(d/2+'0');
            }
        }


        //cout<<" s1 = "<<s1<<"\n s2 = "<<s2<<endl;

        cout<<s1<<" ";

        if(s2.size()==1 and s2[0]=='0')
        {
            cout<<s2<<" ";
        }
        else
        {
            ll i=0;

            bool f=false;
            ll len=sz(s2);
            while(s2[i]=='0')
            {
                i++;
            }

            while(i<len)
            {
                cout<<s2[i];

                f=true;
                i++;
            }


            if(!f) cout<<"0 ";
        }

        cout<<endl;
    }

    //cout<<"123 232"<<endl;
    return 0;
}

