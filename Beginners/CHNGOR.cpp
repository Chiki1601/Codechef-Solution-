/*
 * @author MIss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 28/10/22.
 * Problem link: https://www.codechef.com/problems/CHNGOR
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int x;
		std::cin >> n;
		int ans = 0;
		while (n--) {
			std::cin >> x;
			ans |= x;
		}
		std::cout << ans << "\n";
	}
	return 0;
}
