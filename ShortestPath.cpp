#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sx, sy, dx, dy, fx, fy;
        cin >> sx >> sy >> dx >> dy >> fx >> fy;
        int ans = abs(sx - dx) + abs(sy - dy);
        if (sx == dx && sx == fx && ((fy > sy && fy < dy) || (fy < sy && fy > dy)))
        {
            ans += 2;
        }
        else if (sy == dy && sy == fy && ((fx > sx && fx < dx) || (fx < sx && fx > dx)))
        {
            ans += 2;
        }
        cout << ans << endl;
    }
    return 0;
}