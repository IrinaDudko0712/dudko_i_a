#include <iostream>
#include <vector>
int main() {
	int t = 0;
	std::cin >> t;
		int k = 1, n = 0;
		std::vector<int>a(100);
		for (int i = 0; i < t; i ++) {
			std::cin >> n;
			for (int r = 0; r < n; r ++) {
				std::cin >> a[r];
			}
			for (int y = 0; y < t; y ++) {
				k = 1;
				if (a[0] == 1) {
					k++;
				}
				for (int u = 1; u < n; u ++) {
					if (a[u] == 1 && a[u - 1] != 1) {
						k++;
					}
					if (a[u] == 1 && a[u - 1] == 1) {
						k += 5;
					}
					if (a[u] == 0 && a[u - 1] == 0) {
						k = -1;
						break;
					}
				}
			}
			std::cout << k << std::endl;
		}
}