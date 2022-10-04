#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int c = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> c;
            if (c == 1) {

                cout << abs(3 - i) + abs(3 - j) << endl;
                break;
            }
        }
    }
    return 0;
}