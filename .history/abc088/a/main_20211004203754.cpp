#include <bits/stdc++.h>
using namespace std;

bool flag[100000];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        flag[i] = 0;
    }

    int a[100000];
    int b[100000];

    for (int j = 1; j <= n; j++) {
        cin >> a[j] >> b[j];
        int i = j - a[j] - b[j];
        if (1 <= i && i <= m) {
            flag[i] = 1;
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += flag[i];
    }
    cout << ans << endl;
    return 0;
}