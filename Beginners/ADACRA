/*
 * Pooja Anilkumar Patel
 * github: https://www.github.com/Chiki1601
 * Created on 16/08/2022
 * Problem link: https://www.codechef.com/problems/ADACRA
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		s += ".";
		char prev = ' ';
		int cntUp = 0;
		int cntDown = 0;
		for (char ch:s) {
			if (prev != ch) {
				if (prev == 'U')
					cntUp++;
				else if (prev == 'D')
					cntDown++;
			}
			prev = ch;
		}
		std::cout << std::min(cntUp, cntDown) << "\n";
	}
	return 0;
}
