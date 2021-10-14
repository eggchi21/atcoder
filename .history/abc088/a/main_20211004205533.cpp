#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;

    ans = []
    // 初期化で0
    for (int i = 1; i <= m; i++) {
        result[i] = 0;
    }

    int a[100000];
    int b[100000];

    for (int j = 1; j <= n; j++) {
        cin >> a[j] >> b[j];
        int i = j - a[j] - b[j];
        if (1 <= i && i <= m) {
            result[i] = 1;
        }
    }

    int ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += result[i];
    }
    cout << ans << endl;
}