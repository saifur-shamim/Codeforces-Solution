///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
    int t, n, k;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        cout << n - k + k / 2 << '\n';

        for (int i = k + 1; i <= n; ++i)
            cout << i << " ";

        for (int i = (k + 1) / 2; i < k; ++i)
            cout << i << " ";

        cout << '\n';


    }
    return 0;
}
