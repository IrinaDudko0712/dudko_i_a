#include<iostream>
#include <vector>
void solve() {
	int n; // количество колесиков в ряду
	std::cin >> n;
	std::vector<int> mark(n, 0);
	for (int i = 0; i < n; i++) {// i - номер конкретного одного колеса в ряду
		int number;
		std::cin >> number;
		mark[i] = number;
	}
	for (int i = 0; i < n; i++) {
		int U(0), D(0);//прокрутки колёс: U - вверх, D - вниз
		int ch;
		std::cin >> ch;
		while (ch--) {
			char len;
			std::cin >> len;
			if (len == 'U') {
				U++;
			}
			else {
				D++;
			}
		}
		U %= 10;// U=U%10
		D %= 10;// D=D%10
		std::cout << (10 + D - U + mark[i]) % 10 << ' ';
	}
	std::cout << std::endl;
}
int main()
{
	int a;
	std::cin >> a;
	while (a--) solve();
	return 0;
}