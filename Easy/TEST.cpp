/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 27/08/2022.
 * Problem link: https://www.codechef.com/problems/TEST
 */



#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	while (true) {
		int x;
		std::cin >> x;
		if (x == 42)
			break;
		std::cout << x << "\n";
	}
	return 0;
}
