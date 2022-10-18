#include <iostream>
#include <string>
int main() {
	int t = 1;
	while (t--) {
		solve();
	}
}
void solve() {
	int n = 0;
	std::cin >> n;
	std::string s ;
	std::cin >> s;
	for (int i = 0; i < n; i++) {
		int countB = 0;
		int countR = 0;
		int countW = 0;
		if (s[i]='R') {
			countR += 1;
		}
		if (s[i] = 'B') {
			countB += 1;
		}
		if (s[i] = 'W') {


		}

	}
}