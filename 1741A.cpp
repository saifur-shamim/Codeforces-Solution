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
        string a,b;
        cin>>a>>b;

        if(a==b)
        {
            cout<<"=\n";
            continue;
        }

        int i;
        map<char,int>mp1,mp2;
        for(i=0; i<sz(a); i++)
        {
            mp1[a[i]]++;
        }

        for(i=0; i<sz(b); i++)
        {
            mp2[b[i]]++;
        }

        if((mp1['S']and mp2['M']) or (mp1['M']and mp2['S']))
        {
            if(mp1['S'])
            {
                cout<<"<\n";
            }
            else
            {
                cout<<">\n";
            }
        }
        else if((mp1['S']and mp2['L']) or (mp1['L']and mp2['S']))
        {
            if(mp1['S'])
            {
                cout<<"<\n";
            }
            else
            {
                cout<<">\n";
            }
        }
        else if((mp1['L']and mp2['M']) or (mp1['M']and mp2['L']))
        {
            if(mp1['M'])
            {
                cout<<"<\n";
            }
            else
            {
                cout<<">\n";
            }
        }
        else
        {
            if(mp1['S'] and mp2['S'])
            {
                if(mp1['X']>mp2['X'])
                {
                    cout<<"<\n";
                }

                else
                {
                   cout<<">\n";
                }
            }
            else
            {
                if(mp1['X']>mp2['X'])
                {
                    cout<<">\n";
                }
                else
                {
                    cout<<"<\n";
                }
            }
        }


    }
    return 0;
}
