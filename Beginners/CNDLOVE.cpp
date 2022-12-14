/*
 * @author Pooja Anilkumar Patel(Chiki1601)
 * github: http://www.github.com/schiki1601
 * Created on 23/08/2022.
 * Problem link: https://www.codechef.com/problems/CNDLOVE
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		bool isOdd = false;
		int x;
		while (n--) {
			std::cin >> x;
			isOdd = isOdd ^ (x & 1);
		}
		if (isOdd)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
