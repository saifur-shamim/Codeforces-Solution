///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long int li;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii>vpi;
typedef vector<pll> vpl;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define sz(x) (int)x.size()
#define all(a) (a).begin(),(a).end()
#define faster ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define endl '\n'
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define pf printf

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=9000000000000000000;

int main()
{
    faster;
    int tc;
    cin>>tc;

    while(tc--)
    {
        string s;
        cin>>s;

        int i,cnt1=0,cnt0=0,con=INT_MIN;
        int len=sz(s);

        for(i=0; i<len; i++)
        {
            if(s[i]=='1')
            {
                //cout<<"if s[i]==1"<<endl;
                cnt1++;}
            else
            {
                //cout<<"else condition\n";
                int  cnt=0;
                while(s[i]=='0' && i<len)
                {
                    //cout<<"s[i]= "<<s[i]<<" i = "<<i<<endl;
                    cnt0++;
                    cnt++;
                    con=max(con,cnt);
                    i++;
                }

                i--;
            }

        }


        if(cnt1==len)
        {
            cout<<0<<endl;
        }
        else if(cnt0==len)
        {
            cout<<1<<endl;
        }
        else if(cnt0==con)
        {
            cout<<1<<endl;
        }
        else if(cnt0>1 && cnt1!=0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
