/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 22/08/2022.
 * Problem link: https://www.codechef.com/problems/CATSDOGS
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int c;
		int d;
		int l;
		std::cin >> c >> d >> l;
		bool flag = false;
		if (l % 4 == 0) {
			l = l / 4;
			if (l >= d) {
				l -= d;
				if (l <= c) {
					flag = ((c - l) <= (2 * d));
				}
			}
		}
		std::cout << (flag ? "yes\n" : "no\n");
	}
	return 0;
}
