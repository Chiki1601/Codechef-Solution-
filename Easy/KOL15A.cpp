/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 24/08/22.
 * Problem link: https://www.codechef.com/problems/KOL15A
 */

#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::string s;
	std::cin >> t;
	while (t--) {
		std::cin >> s;
		int sum = 0;
		for (char ch:s)
			if ('0' <= ch && ch <= '9')
				sum += (ch - '0');
		std::cout << sum << "\n";
	}
	return 0;
}
