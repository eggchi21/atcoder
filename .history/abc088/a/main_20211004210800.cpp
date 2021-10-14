#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;

    int a_cnt, b_cnt, c_cnt = 0;
    string ans = [-1 -1 -1];
    // 初期化で0
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            a_cnt = i;
            b_cnt = j;
            c_cnt = n - i - j;
            if (a * a_cnt + b * b_cnt + c * c_cnt == m) {
                ans =[a_cnt b_cnt c_cnt];
            }
        }
    }

    cout << ans << endl;
}