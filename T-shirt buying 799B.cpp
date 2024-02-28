///Bismillahir Rahmanir Rahim
///Happy Coding

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define li long int
#define nl '\n'

int main()
{
    int n;
    cin >> n;
    int p[n+2],a[n+2],b[n+2];
    for ( int i = 1; i <= n; i++ ) cin >> p[i];
    for ( int i = 1; i <= n; i++ ) cin >> a[i];
    for ( int i = 1; i <= n; i++ ) cin >> b[i];

    priority_queue< int, vector<int>, greater<int> > q[5][5];


    for ( int i = 1; i <= n; i++ )
    {
        q[a[i]][b[i]].push ( p[i] );
    }

    int m;
    cin >> m;

    while ( m-- )
    {
        int c;
        cin >> c;

        int ans = INT_MAX;
        int f, b;

        for ( int i = 1; i <= 3; i++ )
        {
            if ( !q[c][i].empty() && q[c][i].top() < ans )
            {
                ans = q[c][i].top();
                f = c, b = i;
            }
        }

        for ( int i = 1; i <= 3; i++ )
        {
            if ( !q[i][c].empty() && q[i][c].top() < ans )
            {
                ans = q[i][c].top();
                f = i, b = c;
            }
        }

        if ( ans == INT_MAX ) ans = -1;
        else
        {
            q[f][b].pop();
        }

        cout << ans << " ";
    }

    cout << endl;
    return 0;
}
