#include <atcoder/all>
using namespace atcoder;
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    // if (n % 500 <= a) {
    //     cout << "Yes"<< endl;
    // } else {
    //     cout << "No"<< endl;
    // }

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
         
     }

    // for(int i=0; i<n; i++) {
    //     cin >> a[i];
    //     sum += h[i];
    //     if(h[i] > max) max = h[i];
    // }

    if(2*max < sum) cout << "Yes" << endl;  
    else cout << "No" << endl;
}
}