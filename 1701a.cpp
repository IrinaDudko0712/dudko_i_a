#include<iostream>
void solve() {
	int a;
	int grass = 0;
	for (int i = 0; i < 4; i++) {
		std::cin >> a;
		grass += (a == 1);
	}
	if (grass == 0) {
		std::cout << 0 << std::endl;
		return;
	}
	if (grass < 4) {
		std::cout << 1 << std::endl;
		return;
	}
	std::cout << 2 << std::endl;
}
int main() {
	int t = 1;
	std::cin >> t;
	while (t--) {
		solve();
	}
}