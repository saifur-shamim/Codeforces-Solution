///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int digit(int x)
{
    int ans=0;

    while(x>0)
    {
        ans+=x%10;

        x/=10;
    }

    return ans;
}
int main()
{
    int k,n=18;;

    cin>>k;

    while(k)
    {
        n++;
        if(digit(n)==10)
        {
            k--;
        }
    }

    cout<<n<<endl;

    return 0;
}
