/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 29/08/2022.
 * Problem link: https://www.codechef.com/problems/CHCHCL
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	int n;
	int m;
	while (t--) {
		std::cin >> n >> m;
		std::cout << ((n & 1) && (m & 1) ? "No\n" : "Yes\n");
	}
	return 0;
}
