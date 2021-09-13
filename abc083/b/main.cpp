#include <bits/stdc++.h>
using namespace std;

int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n, a, b;
  int total = 0;

  cin >> n >> a >> b;
  for (int i = 1; i <= n; ++i) {
    int sum = findSumOfDigits(i);
    if (sum >= a && sum <= b) {
      total += i;
    }
  }
  cout << total << endl;
}