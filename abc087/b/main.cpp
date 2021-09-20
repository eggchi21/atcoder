#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x;
    int counter = 0;

    // 入力値
    cin >> a >> b >> c >> x;

    // 愚直に全てのパターンを調べる
    for(int i = 0; i <= a; ++i) {
      for(int j = 0; j <= b; ++j) {
        for(int k = 0; k <= c; ++k) {
          // 条件にあえば、カウンターに+1
          if (500 * i + 100 * j + 50 * k == x) {
            ++counter;
          }
        }
      }
    }

    // カウンターを出力値に入れる
    cout << counter << endl;
}