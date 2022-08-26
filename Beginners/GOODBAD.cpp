/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 26/08/2022.
 * Problem link: https://www.codechef.com/problems/GOODBAD
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	std::string s;
	while (t--) {
		int n;
		int k;
		std::cin >> n >> k;
		std::cin >> s;
		int up = 0;
		int low = 0;
		for (char ch:s) {
			if (isupper(ch))
				up++;
			else
				low++;
		}
		if (up <= k && low <= k)
			std::cout << "both\n";
		else if (up > k && low > k)
			std::cout << "none\n";
		else if (up <= k && low > k)
			std::cout << "chef\n";
		else if (up > k && low <= k)
			std::cout << "brother\n";
	}
	return 0;
}
