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
   string s1,s2;
   cin>>s1>>s2;

   int neg1=0,neg=0,p=0,p1=0,cnt=0;

   for(int i=0;i<sz(s1);i++)
   {
       if(s1[i]=='+') p++;
       else neg++;

       if(s2[i]=='+') p1++;
       else if(s2[i]=='-') neg1++;
       else cnt++;
   }

   if(p1>p or neg1>neg)
   {
       cout<<"0.000000000000\n";
   }
   else if(p1==p and neg1==neg)
   {
       cout<<"1.000000000000\n";
   }
   else
   {
       cout<<fixed<<setprecision(12);
       cout<<(double)cnt/(cnt*2)<<endl;
   }

    return 0;
}
