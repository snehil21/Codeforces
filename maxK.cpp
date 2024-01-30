#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, curr;
        cin >> n;
        ll b = log2(n);
        b = pow(2, b);
        cout << b - 1 << endl;
        // if (n % 2)
        // {
        //     cout << n - 2 << endl;
        // }
        // else
        // {
        //     cout << n - 1 << endl;
        // }
    }
    return 0;
}