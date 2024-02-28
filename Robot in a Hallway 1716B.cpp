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
        ll m,i;
        cin>>m;

        ll a[m+2],b[m+2],p1[m+2],p2[m+2],p3[m+2];
        p1[0]=p2[0]=p3[3]=0;
        p1[1]=0;
        for(i=1; i<=m; i++)
        {
            cin>>a[i];

            if(i==1)
                p1[i]=a[i];
            else
            {
                if(p1[i-1]<a[i])
                {
                    p1[i]=(a[i])+1;
                }
                else
                {
                    p1[i]=p1[i-1]+1;
                }
            }
        }

        //cout<<p1[m]<<endl;

        for(i=1; i<=m; i++)
        {
            cin>>b[i];

            if(i==1)
            {
                p2[i]=a[i];
                p3[i]=a[i];
                if(b[i]<=p2[i])
                {
                    p2[i]+=1;
                    p3[i]+=1;
                }
                else
                {
                    p2[i]=b[i]+1;
                    p3[i]=b[i]+1;
                }
            }
            else
            {
                if(p2[i-1]<b[i])
                {
                    p2[i]=(b[i])+1;
                }
                else
                {
                    p2[i]=p2[i-1]+1;
                }

                if(i%2)
                {
                    if(p3[i-1]>=a[i])
                    {
                        p3[i]=p3[i-1]+1;
                        if(p3[i]>=b[i])
                        {
                            p3[i]=p3[i]+1;
                        }
                        else
                        {
                            p3[i]=(b[i])+1;
                        }
                    }
                    else
                    {
                        p3[i]=(a[i])+1;
                        if(p3[i]>=b[i])
                        {
                            p3[i]=p3[i]+1;
                        }
                        else
                        {
                            p3[i]=(b[i])+1;
                        }
                    }
                }
                else
                {
                    if(p3[i-1]>=b[i])
                    {
                        p3[i]=p3[i-1]+1;
                        if(p3[i]>=a[i])
                        {
                            p3[i]=p3[i]+1;
                        }
                        else
                        {
                            p3[i]=(a[i])+1;
                        }
                    }
                    else
                    {
                        p3[i]=(b[i])+1;
                        if(p3[i]>=a[i])
                        {
                            p3[i]=p3[i]+1;
                        }
                        else
                        {
                            p3[i]=(a[i])+1;
                        }
                    }
                }
            }
        }

        //cout<<p1[m]<<endl<<p2[m]<<endl<<p3[m]<<endl;

        for(i=m; i>=1; i--)
        {
            if(p1[m]>=b[i])
            {
                p1[m]+=1;
            }
            else
            {
                p1[m]=(b[i])+1;
            }

            if(p2[m]>=a[i] and i!=1)
            {
                p2[m]+=1;
            }
            else if(p2[m]<a[i] and i!=1)
            {
                p2[m]=(a[i])+1;
            }
        }

       // cout<<p1[m]<<endl<<p2[m]<<endl<<p3[m]<<endl;

        ll mn=min(p1[m],min(p2[m],p3[m]));

        cout<<mn<<endl;
    }
    return 0;
}
