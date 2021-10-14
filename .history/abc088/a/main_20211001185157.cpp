#include <atcoder/all>
using namespace atcoder;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100000];
    int b[100000];
    int a_sum = 0;
    int b_sum = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        a_sum+= a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
        b_sum+= b[i];
    }

     if (a_sum > b_sum) {
         cout << "A" << endl;
     } else if (a_sum < b_sum) {
         cout << "B" << endl;
     } else {
        cout << "same" << endl;
     }
}
