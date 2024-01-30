#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int maxi = INT_MIN, mini = INT_MAX;
    int max_index = 0, min_index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi)
        {
            maxi = a[i];
            max_index = i;
        }
        if (a[i] < mini)
        {
            mini = a[i];
            min_index = i;
        }
    }
    int both_left = 0;
    int both_right = 0;
    int different_side = 0;
    // both attacked from left
    both_left = max(max_index, min_index) + 1;
    // both attacked from right
    both_right = n - min(max_index, min_index);
    // different side
    different_side = min(max_index, min_index) + 1 + n - max(max_index, min_index);
    int ans = min(both_left, min(both_right, different_side));
    cout << ans << endl;
};
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