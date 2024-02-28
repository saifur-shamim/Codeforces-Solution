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

        int l1,l2,i;
        string s1,s2;
        cin>>s1>>s2;

        l1=sz(s1);
        l2=sz(s2);

        if(l1<l2)
        {
            string tmp="";

            for(i=0; i<l2-l1; i++)
            {
                tmp+='0';
            }

            for(; i<l2; i++)
            {
                tmp+='9';
                s2[i]='0';
            }

            s1=tmp;
        }
        else
        {

            bool f=false;

            for(i=0; i<l1; i++)
            {
                int ch1,ch2;
                ch1=s1[i]+'0';
                ch2=s2[i]+'0';

                if(ch1<ch2)
                {
                    f=true;
                    i++;
                    break;
                }
            }

            for(; i<l1 and f==true; i++)
            {
                s1[i]='9';
                s2[i]='0';
            }
        }

        int ans=0;

        if(s1==s2)
        {
            cout<<"0\n";
            continue;
        }

        i=0;

        while(s1[i]==s2[i] and i<l2)
        {
            i++;
        }
        ans+=abs(s2[i]-s1[i]);

        ans+=((l2-1-i)*9);

        cout<<ans<<endl;
    }

    return 0;
}

