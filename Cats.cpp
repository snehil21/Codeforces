#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
        {
            for (int i = 2; i <= n - 3; i += 2)
            {
                cout << i << " " << i - 1 << " ";
            }
            cout << n << " " << n - 2 << " " << n - 1 << endl;
        }
        else
        {
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " " << i - 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}