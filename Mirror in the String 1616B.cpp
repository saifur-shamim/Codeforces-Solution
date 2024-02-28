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
#define LIM 200005
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
	int t;
	cin>>t;

	while(t--)
	{
		int n,i;
		cin>>n;

		string s;
		cin>>s;

		vector<char> v;

        v.PB(s[0]);
		for(i=0;i<n-1;i++)
		{
			if(s[i]>s[i+1])
			{
				v.PB(s[i+1]);

				char ch=s[i+1];

				int j=i+2;

				while(s[j]==ch and j<n)
				{
					v.PB(s[j]);
					j++;
				}

				i=j-2;
			}
			else
			{
				break;
			}
		}

		for(auto it:v)
		{
			cout<<it;
		}

		reverse(v.begin(),v.end());

		for(auto it:v)
		{
			cout<<it;
		}

		cout<<endl;
	}

}