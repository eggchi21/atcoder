#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力値
    int n;
    int a[201]; // 最大200個と制約にあるので200より大きい数ならなんでもOK

    // Nの入力値(例: 3)
    cin >> n;

    // A1~An (例: a1=8 a2=12 a3=40) i=1で1番目....i=3で3番目のようにnの入力値分のn回分取得
    for(int i = 1; i <= n; ++i) {
      cin >> a[i];
    }

    // 偶数回割れた回数のカウンター(初期値0)
    int counter = 0;
    // 奇数かどうかのフラグ
    bool evenflag;

    // trueの間ずっと実行
    while (true) {
      // 奇数かどうかのフラグ初期化 = 偶数
      evenflag = false;

      // ※N回分(例: N3)実行 A1~An (例: a1=8 a2=12 a3=40)がそれぞれ偶数か奇数か調べる
      for (int i = 1; i <= n; ++i) {
        // もしAnを2で割ったあまりが0でなかったら奇数フラグを立てる(例: 8->スルー, 12ー>スルー, 13->奇数フラグを立てる)
        if (a[i] % 2 != 0) {
          evenflag = true;
        }
      }

      // 奇数フラグがたってたらwhile(true)を処理終了し抜ける = A1~An(例: a1=8 a2=12 a3=40)のうちどれかが奇数だったということ
      if (evenflag) {
        break;
      }

      // 奇数フラグがたってなかったらA1~An(例: a1=8 a2=12 a3=40)を2で割ってそれぞれ同じ変数a[i]に代入(例: 1回目 a1=8 a2=12 a3=40 => 2回目 a1=4 a2=6 a3=20 => 3回目 a1=2 a2=3 a3=10)
      // この値はwhileがtrueなので再度 while以下の(※)に戻って実行される
      for (int i = 1; i <= n; ++i) {
          a[i] = a[i] / 2;
      }

      // 2で割れた回数を1足す(counter=0 -> counter=1)
      ++counter;
    }

    // カウンターを出力値に入れる
    cout << counter << endl;
}