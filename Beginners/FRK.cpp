/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 26/08/2022.
 * Problem link: https://www.codechef.com/problems/FRK
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	std::string s;
	int cnt = 0;
	while (n--) {
		std::cin >> s;
		bool flag = false;
		for (int i = 0; i < s.length() - 1; ++i) {
			if ((s[i] == 'c' && s[i + 1] == 'h') || (s[i] == 'h' && s[i + 1] == 'e') ||
				(s[i] == 'e' && s[i + 1] == 'f'))
				flag = true;
			if (flag)
				break;
		}
		cnt += flag;
	}
	std::cout << cnt;
	return 0;
}
