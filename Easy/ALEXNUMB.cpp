/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 19/10/22.
 * Problem link: https://www.codechef.com/problems/ALEXNUMB
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		long long int n;
		std::cin >> n;
		int x;
		for (int i = 0; i < n; i++) {
			std::cin >> x;
		}
		long long int ans = (n * (n - 1)) / 2;
		std::cout << ans << "\n";
	}
	return 0;
}
