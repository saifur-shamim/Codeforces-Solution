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
const ll infll=900000000000000000;

int main()
{	

	faster;

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif 

      int test;
      cin>>test;

      while(test--)
      {
      	 ll n,i;

      	 cin>>n;

      	 char c1,c2,fast,last;

      	  vector<char> ans;

      	 for(i=1;i<=n-2;i++)
      	 {
      	 	cin>>c1>>c2;

      	 	if(i==1)
      	 	{
      	 		ans.PB(c1);
      	 		ans.PB(c2);

      	 		fast=c1,last=c2;
      	 	}
      	 	else if(last==c1)
      	 	{
      	 		ans.PB(c2);
      	 		
      	 		fast=c1,last=c2;
      	 	}
      	 	else
      	 	{
      	 		ans.PB(c1);
      	 		ans.PB(c2);

      	 		fast=c1,last=c2;
      	 	}
      	 }

      	 

      	 if(sz(ans)==n)
      	 {
      	 	for(auto ch:ans)
      	 	{
      	 		cout<<ch;
      	 	}
      	 }
      	 else
      	 {
      	 	ans.PB('a');

      	 	for(auto ch:ans)
      	 	{
      	 		cout<<ch;
      	 	}

      	 }

      	 cout<<endl;
      	 
      }

}

//1618 div c addtional part
/*ans=g1;
					for(i=0;i<sz(v2);i++)
					{
						if(v2[i]%g1==0)
						{
							ans=0;
							break;
						}
			            }
				if(ans==0)
				{    
					ans=g2;
					for(i=0;i<sz(v1);i++)
					{
						if(v1[i]%g2==0)
						{
							ans=0;
							break;
						}
					}
				}

				*/