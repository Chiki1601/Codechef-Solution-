/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 09/10/22.
 * Problem link: https://www.codechef.com/problems/L56GAME
 */
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int cntOdd = 0;
		int inp;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			if (inp & 1)
				cntOdd++;
		}
		if (n == 1)
			std::cout << "1\n";
		else {
			if (cntOdd & 1)
				std::cout << "2\n";
			else
				std::cout << "1\n";
		}
	}
	return 0;
}
