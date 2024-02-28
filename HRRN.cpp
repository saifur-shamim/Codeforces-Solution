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
//   input
/*   0 3
     1 2
     3 5
     2 1
     4 4
*/
int main()
{

    int n;
    cout<<"Enter the procces number\n";
    cin >> n;

    int at[n+5]= {0}, bt[n+5]= {0};

    int indx= 1e9, mn = 1e9;
    cout<<"Enter arrival and burst time of each process\n";
    for( int i = 1; i <= n; i++)
    {
        cin >> at[i]>>bt[i];
        if(at[i] < mn)
        {
            mn = at[i];
            indx = i;
        }
    }


    int ct[n+5]= {0};

    int finished[n+5]= {0};

    int ends = bt[indx];
    finished[indx] = 1;
    ct[indx] = ends;

    for( int i = 2; i <= n; i++)
    {
        int next = -1;
        float rr = 0.0;
        int mnat = 1e9;
        for( int j = 1; j <= n; j++)
        {
            float rspn= ((ends - at[j]) + bt[j]) / bt[j];

            if(finished[j] == 0 && at[j] < ends && rspn > rr)
            {
                rr = rspn;
                next = j;
                mnat = at[j];
            }
            else if( finished[j] == 0 && at[j] < ends && rr == rspn && at[j] < mnat)
            {
                rr = rspn;
                next = j;
                mnat = at[j];
            }
        }

        ends += bt[next];
        finished[next] = 1;
        ct[next] = ends;
    }


    int tat[n+5] = {0};
    int wt[n+5]= {0};

    int tot_tat = 0, tot_wt = 0;
    for( int i =1 ; i <= n; i++)
    {
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];

        tot_wt += wt[i];
        tot_tat += tat[i];
    }



    cout << (float) tot_tat/n <<" "<< (float) tot_wt/n <<endl;



}
