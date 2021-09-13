#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, sum, int_sum;
    string str_a, str_b, str_sum;
    cin >> a >> b;
    str_a = std::to_string(a);
    str_b = std::to_string(b);
    str_sum = str_a + str_b;
    int_sum = atoi(str_sum.c_str());
    sum = sqrt(int_sum);

    if (int_sum == sum * sum) {
        cout << "Yes"<< endl;
    } else {
        cout << "No"<< endl;
    }
}