/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 27/11/22.
 * Problem link: https://www.codechef.com/problems/CHEFROUT
 */

#include <iostream>
#include <regex>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string n;
		std::cin >> n;
		std::cout << (regex_match(n, std::regex("^C*E*S*$")) ? "yes\n" : "no\n");
	}
	return 0;
}
Footer
© 2022 GitHub, Inc.
