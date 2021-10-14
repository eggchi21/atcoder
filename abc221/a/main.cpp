#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i= b; i< a; i++) {
        ans = ans * 32;
    }
    cout << ans << endl;
}