#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll res = (n % 2 == 1) ? (n - 1) : n;
        cout << 2 << " " << res << endl;
    }
    return 0;
}