///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
using namespace std;

typedef  long long ll;
typedef  pair<int,int> pii;
typedef  vector<pii>vpi;
#define     PB        push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
bool f(pair<int,int> a, pair<int,int> b)
{
    if(a.first == b.first) return a.second < b.second;
    else return a.first > b.first;
}
bool f1(pair<int,int> a, pair<int,int> b)
{
    return a.first > b.first;
}

int main()
{
    vpi v;
    v.PB({3,1});
    v.PB({5,3});
    v.PB({5,1});
    v.PB({5,2});
    cout<<"before sorting\n";
    for(auto it:v)
    {
        cout<<it.F <<" "<<it.S<<endl;
    }

    sort(all(v),f1);

    //sort in decresing order dependent on only first value of pair
    cout<<"after sorting by f1\n";
    for(auto it:v)
    {
        cout<<it.F <<" "<<it.S<<endl;
    }
    sort(all(v),f);
    //sort in decresing order dependent on first value and second value of  pair
    cout<<"after sorting by f\n";
    for(auto it:v)
    {
        cout<<it.F <<" "<<it.S<<endl;
    }

    return 0;
}
