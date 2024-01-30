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
        ll sum = 0, count1 = 1, count2 = 1;
        ll curr = 2;
        while (sum < n - 1)
        {
            count1++;
            sum += curr;
            curr += 2;
        }
        sum = 0;
        curr = 3;
        while (sum < n - 1)
        {
            count2++;
            sum += curr;
            curr += 2;
        }
        cout << min(count1, count2) << endl;
    }
    return 0;
}