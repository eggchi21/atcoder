#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N, A, MIN = 1001, MAX = -1;
    cin >> N;

    for(int i=1; i <=N; i++) {
      cin >> A;
      if(MIN > A) MIN = A;
      if(MAX < A) MAX = A;
    }

    cout << MAX - MIN << endl;
}