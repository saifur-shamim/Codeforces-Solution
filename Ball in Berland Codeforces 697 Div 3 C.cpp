///Bismillahir Rahmanir Rahim
///Happy Coding

#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll boy[200005], girl[200005];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t, a, b, k, arr[200005], brr[200005], i;

    cin >> t;
    while(t--)
    {
        cin >> a >> b >> k;
        for(i = 0; i < k; i++)
        {
            cin >> arr[i];
            boy[arr[i]]++;
        }

        for(i = 0; i < k; i++)
        {
            cin >> brr[i];
            girl[brr[i]]++;
        }

        ll sum = 0;
        for(i = 0; i < k; i++)
        {
            sum += k-1-boy[arr[i]]-girl[brr[i]]+2;
        }

        cout << sum/2 << endl;

        for(i = 0; i < k; i++)
            boy[arr[i]] = girl[brr[i]] = 0;
    }



    return 0;

}

