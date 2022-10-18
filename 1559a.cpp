#include<iostream>
#include <string>
#include <array>
#include <vector>
void solve() {
	int n (0);
	std::cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; i += 1) {
		std::cin >> a[i];
	}
	int b = a[0];
	for (int i = 1; i < n; i += 1) {
		b &= a[i];
	}
	std::cout << b << std::endl;
}
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		solve();
	}
}