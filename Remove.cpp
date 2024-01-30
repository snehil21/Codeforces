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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        stack<int> st;
        st.push(arr[0]);
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - st.top() == 1)
            {
                st.pop();
                st.push(arr[i]);
            }
            else if (arr[i] - st.top() == 0)
            {
                continue;
            }
            else
            {
                st.push(arr[i]);
            }
        }
        if (st.size() <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}