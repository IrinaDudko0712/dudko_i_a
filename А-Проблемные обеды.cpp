#include <iostream>
using namespace std;

int main() {
    int k, n, max;
    cin >> n;
    cin >> k;
    int f[n], t[n];
    for (int i = 0; i < n; i++) {
        cin >> f[i];
        cin >> t[i];
        if (t[i] > k) {
            f[i] = f[i] - (t[i] - k);
        }
    }
    max = f[0];
    for (int j = 0; j < n; j++) {
        if (f[j] > max) {
            max = f[j];
        }
    }
    cout << max << endl;
    return 0;
}