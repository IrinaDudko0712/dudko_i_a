#include <iostream>
#include <array>
#include <cmath>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    while (t--) {
        std::array <int, 100> a;
        std::array <int, 100> b;
        std::array <int, 100> tm;
        int times = 0;
        std::cin >> n;
        a[0] = 0;
        b[0] = 0;
        for (int i = 1; i <= n; i++) {
            std::cin >> a[i] >> b[i];
        }
        tm[0] = 0;
        for (int i = 1; i <= n; i++) {
            std::cin >> tm[i];
        }
        for (int i = 0; i < n; i++) {
            times= std::max(times + (b[i] - a[i] + 1) / 2, b[i]);
            times += a[i + 1] - b[i] + tm[i + 1];
        }
        std::cout << times << std::endl;
    }
}