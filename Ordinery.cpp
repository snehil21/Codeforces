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
        ll count = 0;
        for (int i = 1; i <= 9; i++)
        {
            ll temp = i;
            while (temp <= n)
            {
                count++;
                temp = temp * 10 + i;
            }
        }
        cout << count << endl;
    }
    return 0;
}