///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    int x,y,a,b;

    cin>>x>>y>>a>>b;

    if(x<b)
    {
        cout<<"0\n";
    }

    else{

        vector <pair <int, int> > v;

        int b1;

        for(int i=x;i>=a;i--)
        {
            b1=b;
            while(i>b1 && b1<=y)
            {
                v.push_back(make_pair(i,b1));
                b1++;
            }
        }

        cout<<v.size()<<endl;

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }

    return 0;
}
