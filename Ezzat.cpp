#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    double sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += (double)a[i];
    }
    sum /= (n - 1);
    sum += (double)a[n - 1];
    printf("%.9lf\n", sum);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
