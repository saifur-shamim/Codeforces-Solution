///Bismillahir Rahmanir Rahim
///Happy Coding

/*

     * * * *             *              *  * * * * * *   *            *   * * * * *
    *                   * *             *  *             *            *   *         *
    *                  *   *            *  *             *            *   *          *
    *                 *     *           *  *             *            *   *           *
    *                *       *          *  *             *            *   *           *
     *              *         *         *  * * * * * *   *            *   *          *
       *           *           *        *  *             *            *   * * * * * *
         *        *             *       *  *             *            *   *  *
          *      * * * * * * * * *      *  *             *            *   *    *
           *    *                 *     *  *             *            *   *      *
           *   *                   *    *  *             *            *   *        *
           *  *                     *   *  *              *          *    *          *
    * * * *  *                       *  *  *                * * * * *     *            *


*/


#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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

#define     pb        push_back
#define     del       pop_back
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
#define     nn        cout<<endl
#define     negone    cout<<"-1\n"

// int dx[] = { -1 , 1 ,  0  , 0 , -1  , -1  ,  1  , 1  };
// int dy[] = { 0  , 0 , -1  , 1 , -1  ,  1  , -1  , 1  };

//            { U  , D ,  L  , R , UL  , UR  , DL  , DR }

const dl PI=acos(-1);
const int inf=2e9;
const ll infll=900000000000000000;


const int mx = 1e5+123;
ll st[2][mx*4],lazy[mx*4];
ll a[mx];

string s;

void propagate(ll si,ll b,ll e)
{
    if(lazy[si]!=0)
    {
        swap(st[0][si],st[1][si]);
        if(b!=e)
        {
            lazy[2*si]^=lazy[si];
            lazy[2*si+1]^=lazy[si];
        }
        lazy[si]=0;
    }
    return;
}
void build(ll id,ll b,ll e)
{
    if(b==e)
    {
        st[(s[b]-'0')][id]=a[b];
        return;
    }
    ll mid=(b+e)/2;
    build(2*id,b,mid);
    build(2*id+1,mid+1,e);

    st[0][id]=st[0][2*id]^st[0][2*id+1];
    st[1][id]=st[1][2*id]^st[1][2*id+1];
}
void update(ll id,ll b,ll e,ll l,ll r)
{
// will be updated range from l to r

    propagate(id,b,e);
   /* if(lazy[id]!=0)
    {
        swap(st[0][id],st[1][id]);
        lazy[id]=0;
        if(b!=e)
        {

            lazy[2*id]^=1;
            lazy[2*id+1]^=1;

        }
    }   */


    if(b>r || e<l)
    {
        return;
    }
    if(b>=l && e<=r)
    {
        swap(st[0][id],st[1][id]);

        if(b!=e)
        {

            lazy[2*id]^=1;
            lazy[2*id+1]^=1;
        }
        return;
    }
    ll mid=(b+e)/2;
    update(2*id,b,mid,l,r);
    update(2*id+1,mid+1,e,l,r);

    st[0][id]=st[0][2*id]^st[0][2*id+1];
    st[1][id]=st[1][2*id]^st[1][2*id+1];
}
ll query(ll id,ll b,ll e,ll l,ll r,int bit)
{
//this func returns value from l to r

    propagate(id,b,e);
    /*
    if(lazy[id]!=0)
    {
        swap(st[0][id],st[1][id]);
        lazy[id]=0;
        if(b!=e)
        {

            lazy[2*id]^=1;
            lazy[2*id+1]^=1;

        }
    }  */

    if(b>r || e<l)
    {
        return 0;
    }
    if(b>=l and e<=r)
    {
        return st[bit][id];
    }
    ll mid=(b+e)/2;
    ll L=query(2*id,b,mid,l,r,bit);
    ll R=query(2*id+1,mid+1,e,l,r,bit);
    return (L^R);
}


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

        int n,i;
        cin>>n;

        for(int j=1; j<=n*4; j++)
        {
            st[0][j]=0;
            st[1][j]=0;
            lazy[j]=0;
        }
        vl ans;
        for(i=1; i<=n; i++) cin>>a[i];

        cin>>s;

        s='@'+s;

        build(1,1,n);

        int q;
        cin>>q;

        while(q--)
        {
            int typ;
            cin>>typ;

            if(typ==2)
            {
                int bit;
                cin>>bit;

                ll res=query(1,1,n,1,n,bit);

                ans.pb(res);
            }
            else
            {

                int l,r;
                cin>>l>>r;

                update(1,1,n,l,r);
            }
        }


        for(auto it:ans)
        {
            cout<<it<<" ";
        }

        nn;
    }

    return 0;
}

