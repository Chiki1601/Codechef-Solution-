/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 10/10/22.
 * Problem link: https://www.codechef.com/problems/CLIPLX
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x;
		int y;
		std::cin >> x >> y;
		std::cout << std::max(0, x - y) << "\n";
	}
	return 0;
}
