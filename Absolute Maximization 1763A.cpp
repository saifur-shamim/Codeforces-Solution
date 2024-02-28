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

string base_convert(int n, int b)
{
    if (n == 0) return "0";
    int x = 0;
    int power = 1;
    while (power * b <= n)
    {
        power *= b;
        x++;
    }
    string d="";

    while (power > 0)
    {
        int k = n / power;


        if(k>=10)
        {
            d += mp[k];//must be initialized before function
//must be inserted mp value from 10 to 15 {A to F} for hexa decimal base
        }
        else
        {
            d+=k+'0';
        }

        n -= k * power;
        power /= b;
    }
    return d;
}
/*
int convert_to_decimal(string a, int b)
{
    int n = 0;
    int power = 1;
    for (int i = (int) a.size() - 1; i >= 0; i--)
    {
        n += (c - '0') * power;
        power *= b;
    }
    return n;
}
*/
int main()
{


    /*
    #ifndef ONLINE_JUDGE
       freopen("input.txt","r",stdin);
       freopen("output.txt","w",stdout);
    #endif
    */



    int n;
    cout<<"Enter a no \n";
    cin>>n;

    int b;
    cout<<"Enter base \n";
    cin>>b;

    string s=base_convert(n,b);
    cout<<s<<endl;
}
