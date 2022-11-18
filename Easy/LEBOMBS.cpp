/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 18/11/2022.
 * Problem link: https://www.codechef.com/problems/LEBOMBS
 */
#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		std::string s;
		std::cin >> s;
		int cnt = 0;
		bool isDestroyed[n + 1];
		std::fill(isDestroyed, isDestroyed + n + 1, false);
		for (int i = 1; i <= n; i++) {
			if (s[i - 1] == '1') {
				isDestroyed[i] = true;
				if (i > 1)
					isDestroyed[i - 1] = true;
				if (i < n)
					isDestroyed[i + 1] = true;
			}
		}
		for (int i = 1; i <= n; i++) {
			if (!isDestroyed[i])
				cnt++;
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
