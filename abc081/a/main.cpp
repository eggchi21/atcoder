#include <bits/stdc++.h>
using namespace std;

int main() {
    // 入力値を取得(例: "101", "000")
    string s;
    cin >> s;

    // カウンターを設定
    int counter = 0;
    /**
     * for文でiが1~3までの間で入力値のi番目が1であればカウンターに1を足す
     * 例えば、s = "101" で i = 2の場合 "0"がとりだされ'1'かどうか判断する
     */
    for(int i = 0; i <=3; ++i) {
        if (s[i] == '1') {
            ++counter;
        }
    }
    // カウンターを出力値に入れる
    cout << counter << endl;
}