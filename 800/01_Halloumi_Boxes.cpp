// problem: https://codeforces.com/problemset/problem/1903/A

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define lld long long

int main(void)
{
    lld t;
    cin >> t;
    while (t--)
    {
        lld n, k;
        cin >> n >> k;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (k == 1)
        {
            if (is_sorted(a.begin(), a.end()))
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
