///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    ll t;
    cin>>t;

    while(t--)

    {
        int n, k;
        cin >> n >> k;
        string s(n, 'a');

        for (int i = n - 2; i >= 0; i--)
        {
            if (k <= (n - i - 1))
            {
                s[i] = 'b';
                s[n - k] = 'b';
                cout << s << endl;
                break;
            }
            k -= (n - i - 1);
        }
    }

    return 0;
}
