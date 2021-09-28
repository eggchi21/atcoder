#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力値
  int n;
  cin >> n;
  
  if (n % 2 == 0) {
    cout << n / 2 << endl;
  } else {
    cout << ceil(n/2) + 1 << endl;
  }
}