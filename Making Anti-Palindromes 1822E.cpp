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

lev:
    while(tc--)
    {

        int n,i,j;
        cin>>n;

        string s;
        cin>>s;


        if(n & 1)
        {
            cout<<"-1\n";
            continue;
        }

        vi freq(26,0);

        for(auto it:s)
        {
            freq[it-'a']++;
        }

        for(i=0;i<26;i++)
        {
            if(freq[i]>n/2)
            {
                cout<<"-1\n";
                goto lev;
            }
        }


        fill(all(freq),0);

        for(i=0; i<n/2; i++)
        {
            if(s[i]==s[n-i-1])
            {
                freq[s[i]-'a']++;
            }
        }

        multiset<int> st;

        for(i=0;i<26;i++)
        {
            if(freq[i])
            {
                st.insert(freq[i]);
            }
        }


        int ans=0;

        while(sz(st)>1)
        {
            auto a=st.begin();
            auto b=st.end();

            b--;

            int x,y;

            x=*a-1;
            y=*b-1;

            st.erase(a);
            st.erase(b);

            if(x) st.insert(x);

            if(y) st.insert(y);

            ans++;
        }

        if(sz(st)) ans+=*st.begin();

        cout<<ans<<endl;

    }

    return 0;
}

