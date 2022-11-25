/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 7/26/20.
 * Problem link: https://www.codechef.com/problems/CHEFSTUD
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
		int cnt = 0;
		for (int i = 0; i < s.length() - 1; i++)
			if (s[i] == '<' && s[i + 1] == '>')
				cnt++;
		std::cout << cnt << "\n";
	}
	return 0;
}
