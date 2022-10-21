/*
 * @author MIss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 21/10/22.
 * Problem link: https://www.codechef.com/problems/TOTR
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t, i;
	std::string map;
	std::string s;
	std::cin >> t >> map;
	while (t--) {
		std::cin >> s;
		for (i = 0; s[i]; i++) {
			if (islower(s[i])) s[i] = map[s[i] - 'a'];
			else if (isupper(s[i])) s[i] = toupper(map[s[i] - 'A']);
			else if (s[i] == '_') s[i] = ' ';
		}
		std::cout << s << "\n";
	}
	return 0;
}
