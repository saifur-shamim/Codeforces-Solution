///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string S;
        cin>>S;

        bool possible=false;
        for (int first = 0; first <= 4; first++)
        {
            int second = 4 - first;



            if (S.substr(0, first) + S.substr(n - second) == "2020")
              possible = true;
        }

        cout<<(possible ? "YES" : "NO")<<endl;
    }

    return 0;
}
