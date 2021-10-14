#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    char x;

    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] != t[i]) {
            x = s[i];
            s[i] = s[i + 1];
            s[i + 1] = x;
            break;
        }
    }

    if (s == t) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}