/*
 * @author Miss Pooja Anilkumar Patel (chiki1604)
 * github: http://www.github.com/chiki1601
 * Created on 14/10/22.
 * Problem link: https://www.codechef.com/problems/GOODSET
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
		int cnt = 1;
		for (int i = 1; i <= n; i++) {
			std::cout << cnt << " ";
			cnt += 2;
		}
		std::cout << "\n";
	}
	return 0;
}
