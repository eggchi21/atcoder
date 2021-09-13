#include <iostream>
#include <string>
using namespace std;

int main() {
    int N,max=0,sum=0;
    int h[100];
    cin >> N;
    for(int i=0;i<N;i++) {
        cin >> h[i];
        sum += h[i];
        if(h[i] > max) max = h[i];
    }

    if(2*max < sum) cout << "Yes" << endl;  
    else cout << "No" << endl;
}