/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 7/23/20.
 * Problem link: https://www.codechef.com/problems/NUMGAME2
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
		if ((n & 3) == 1)
			std::cout << "ALICE\n";
		else
			std::cout << "BOB\n";
	}
	return 0;
}
