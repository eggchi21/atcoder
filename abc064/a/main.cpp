#include <bits/stdc++.h>
using namespace std;

int main() {
  // にゅう
  int a, b, c, d;
  cin >> a >> b >> c;
  d = (a * 100 + b * 10 + c) % 4;
  
  if (d == 0) {
    cout << "YES" << endl;  
  }
  else {
    cout << "NO" << endl;
  }
}