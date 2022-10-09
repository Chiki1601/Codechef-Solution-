/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 09/10/22.
 * Problem link: https://www.codechef.com/problems/TWOVSTEN
 */
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	long n;
	while (t--) {
		std::cin >> n;
		n %= 10;
		if (n == 0)
			std::cout << "0\n";
		else if (n == 5)
			std::cout << "1\n";
		else
			std::cout << "-1\n";
	}
	return 0;
}
