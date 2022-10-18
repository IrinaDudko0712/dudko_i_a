#include <iostream>
#include<vector>
int main() {
	int t = 0;
	std::cin >> t;
	for (int ia = 0; ia < t; ia+=1) {
		int n = 0;
		std::cin >> n;
		std::vector <int> a(n);
		for (int i = 0; i < n; i += 1)
			std::cin >> a[i];
		int jump = 0;
		for (int i = 0; i < n; i += 1) {
			if (a[i] == 0) {
				jump = i - 1;
				break;
			}
		}
		int jump1 = 0;
		for (int i = n - 1; i >= 0; i -= 1) {
			if (a[i] == 0) {
				jump1 = i + 1;
				break;
			}
		}
		std::cout << jump1 - jump << std::endl;
	}
}