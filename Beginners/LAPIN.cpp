/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 09/10/22.
 * Problem link: https://www.codechef.com/problems/LAPIN
 */
#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	while (t--) {
		std::cin >> s;
		int l = s.length();
		std::string left = s.substr(0, l / 2);
		std::string right = s.substr((l & 1) + l / 2);
		std::sort(left.begin(), left.end());
		std::sort(right.begin(), right.end());
		if (left == right)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
