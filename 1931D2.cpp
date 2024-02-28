#include<bits/stdc++.h>
#include<math.h>
#define    ll   long long int
#define ull unsigned long long int
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree< ll, null_type, less<ll >, rb_tree_tag, tree_order_statistics_node_update> order_set;
#define fbo find_by_order
#define ook order_of_key
#define    F     first
#define    S    second
#define    all(x) (x).begin(),(x).end()
#define    print(res) cout<<#res<<" = ";for(auto x:res) cout<<x<<" "; cout<<endl
#define    see(res) cout<<#res<<" = "<<res<<endl
#define    fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define    pf      push_front
#define    pb      push_back
#define    NL      printf("\n")
#define    YES       printf("YES\n")
#define    NO        printf("NO\n")
#define    Yes       printf("Yes\n")
#define    No        printf("No\n")
#define tc int tc;scanf("%d",&tc);for(int cs=1;cs<=tc;cs++)


const ll mxn=1e6+6;
const ll mod=1e9+7;
const ll N=2e6+100;

void solve( )
{
    ll n;
    cin>>n;

    string s;
    cin>>s;

    map<char,deque<int> > str;
    ll n2=n*2;
    for(ll i=1; i<=n+n; i++)
    {
        ll num;
        cin>>num;
        char let;
        cin>>let;
        str[let].push_back(num);
    }

    vector<pair<string,string> > res;

    ll cnt1=0;

    char trump=s[0];

    for(auto it:str)
    {
        if(it.first!=trump and (str[it.first].size())%2) cnt1++;

        sort(all(str[it.first]));
    }

    if(cnt1>(str[trump].size()))
    {
        printf("IMPOSSIBLE\n");
        return ;
    }

    for(auto it:str)
    {
        if(it.first==trump) continue;

        while(str[it.first].size()>1)
        {

            string s1="",s2="";
            s1=it.first;
            s1+=str[it.first].front()+'0';
            str[it.first].pop_front();
            reverse(all(s));
            s2=it.first;
            s2+=str[it.first].back()+'0';
            str[it.first].pop_back();
            reverse(all(s));
            res.pb({s1,s2});
        }

        if(str[it.first].size()==1 and trump!=it.first)
        {
            string s1="",s2="";
            s1=it.first;
            s1+=str[it.first].front()+'0';
            str[it.first].pop_front();
            s2=trump;
            s2+=str[trump].front()+'0';
            str[trump].pop_front();
            reverse(all(s));
            reverse(all(s));
            res.pb({s1,s2});
        }
    }


    while(str[trump].size()>1)
    {

        string s1="",s2="";
        s1=trump;

        s1+=str[trump].front()+'0';
        str[trump].pop_front();
        s2=trump;
        s2+=str[trump].back()+'0';
        str[trump].pop_back();
        reverse(all(s));
        reverse(all(s));
        res.push_back({s1,s2});
    }
    // for(auto &[x,y]: res) cout<<x<<" "<<y<<endl;


    for(int i=0; i<res.size(); i++)
    {

        string a1,a2;

        a1=res[i].first;
        cout<<a1[1]<<a1[0]<<" ";

       a2=res[i].second;
         cout<<a2[1]<<a2[0]<<endl;
    }

    return ;
}




int main( )
{

    tc

    {
        solve();
    }

    return 0;
}
//printf("Case %d: ",cs);
