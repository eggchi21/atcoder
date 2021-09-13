#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[1000];
    int counter;
    bool flag;

    cin >> n;
    for(int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    counter = 0;
    while (true) {
      flag = false;
      for (int i = 0; i < n; ++i) {
        if (a[i] % 2 != 0) {
          flag = true;
        }
      }

      if (flag) {
        break;
      }

      for (int i = 0; i < n; ++i) {
          a[i] = a[i] / 2;
      }
      ++counter;
    }
    cout << counter << endl;
}