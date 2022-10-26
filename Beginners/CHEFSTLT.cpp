
/*
* @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601 
	Created on 26/10/22.
	https://www.codechef.com/problems/CHEFSTLT
*/

#include <iostream>
#include <string>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s1, s2;
	while (t--) {
		std::cin >> s1 >> s2;
		int countUnknown = 0, countUnequal = 0, l = s1.length();
		for (int i = 0; i < l; ++i) {
			if (s1[i] == '?' || s2[i] == '?')
				countUnknown++;
			else if (s1[i] != s2[i])
				countUnequal++;
		}
		std::cout << countUnequal << " " << (countUnequal + countUnknown) << "\n";
	}
	return 0;
}
