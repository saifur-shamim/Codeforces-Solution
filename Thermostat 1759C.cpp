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
        ll l,r,x,a,b,i;
        cin>>l>>r>>x>>a>>b;

        ll dif=abs(a-b);

        if(dif==0)
        {
            cout<<"0\n";
        }
        else if(dif>=x)
        {
            cout<<"1\n";
        }
        else if(a+x>r and a-x<l)
        {
            cout<<"-1\n";
        }
        else
        {
           ll ri8=a+x;
           ll aR=infll;
           ll aL=infll;
           if(ri8<r)
           {
               ri8=r;
           }

           if(ri8>r)
           {
               aR=infll;
           }
           else if(ri8-b>=x)
           {
               aR=2;
           }
           else if(b-x>=l)
           {
               aR=3;
           }

           ll left=a-x;

           if(left>l)
           {
               left=l;
           }


           if(left<l)
           {
               aL=infll;
           }
           else if(abs(left-b)>=x)
           {
               aL=2;
           }
           else if(b+x<=r)
           {
               aL=3;
           }

           if(aR==aL and aR==infll)
           {
               cout<<"-1\n";
           }
           else{cout<<min(aR,aL)<<endl;}


        }


    }
    return 0;
}

