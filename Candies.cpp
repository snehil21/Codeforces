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
        ll a[n];
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n)
        {
            cout << -1 << endl;
        }
        else
        {
            ll avg = sum / n;
            ll ans = 0;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] > avg)
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}