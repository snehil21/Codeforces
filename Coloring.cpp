#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        unordered_map<char, int> mp;
        for (int i = 0; i < str.length(); i++)
        {
            mp[str[i]]++;
        }
        int count = 0, sigle = 0;
        for (auto it : mp)
        {
            if (it.second > 1)
                count++;
            if (it.second == 1)
                sigle++;
        }
        cout << count + sigle / 2 << endl;
    }
    return 0;
}