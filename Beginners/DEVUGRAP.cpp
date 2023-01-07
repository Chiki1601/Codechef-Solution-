/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 07/01/2023
 * Problem link: https://www.codechef.com/problems/DEVUGRAP
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		int inp;
		long cnt = 0;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			int rem = inp % k;
			if (inp >= k) cnt += std::min(rem, k - rem);
			else cnt += k - rem;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
