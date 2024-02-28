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

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

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

        int i,len=sz(s);

        map<char,vector<int> > mp;

        for(i=0; i<len; i++)
        {
            mp[s[i]].PB(i+1);
        }

        char ch='a';

        int ans=inf;

        for(i=0; i<26; i++)
        {
            int gap=-1;
            for(int j=0; j<sz(mp[ch]); j++)
            {
                if(j==0)
                {
                    gap=mp[ch][j]-1;
                }
                else
                {
                    gap=max(gap,(mp[ch][j]-mp[ch][j-1])-1);
                }
                if(j+1 == sz(mp[ch]))
                {
                    if(j==0)
                        gap=max(gap,len-mp[ch][j]);

                    else
                    {
                        gap=max(gap,len-mp[ch][j]);
                        gap=max(gap,(mp[ch][j]-mp[ch][j-1])-1);
                    }
                }

            }



            if(gap!=-1)
            {

                int cnt=0;
                while(gap>0)
                {

                    cnt++;
                    gap/=2;
                }
                ans=min(ans,cnt);
            }

            ch++;



        }

        cout<<ans<<endl;
    }

    return 0;
}
