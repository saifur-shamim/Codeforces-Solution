///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int n,i,a;

    set<int> s;
    set<int> :: iterator it;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }

    if(s.size()<2) cout<<"NO\n";

    else
    {
        it=s.begin();
        it++;
        cout<<*it<<endl;
    }

    return 0;
}
