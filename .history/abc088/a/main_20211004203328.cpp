#include <iostream>
using namespace std;

bool flag[X];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        flag[i] = 0;
    for (int j = 1; j <= n; j++)
    {
        int a, b;
        cin >> a >> b;
        int i = j - a - b;
        if (1 <= i && i <= m)
        {
            flag[i] = 1;
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        ans += flag[i];
    }
    cout << ans << endl;
    return 0;
}