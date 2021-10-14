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
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
        for(int i=0; i<n; i++) {
        cin >> b[i];
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