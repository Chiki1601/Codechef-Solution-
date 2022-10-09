/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 09/10/22.
 * Problem link: https://www.codechef.com/problems/TWOSTR
 */
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		bool flag = true;
		std::string s1, s2;
		std::cin >> s1 >> s2;
		for (int i = 0; i < (int)s1.length(); ++i) {
			if (s1[i] != '?' && s2[i] != '?' && s1[i] != s2[i]) {
				flag = false;
				break;
			}
		}
		if (flag)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	return 0;
}
