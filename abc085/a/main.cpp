#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力値
  string s;
  cin >> s;

  string ans = regex_replace(s, regex("2017"), "2018");

  cout << ans << endl;

}