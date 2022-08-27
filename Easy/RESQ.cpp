/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 27/08/2022.
 * Problem link: https://www.codechef.com/problems/RESQ
 */
#include<iostream>
#include <cmath>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		for (int i = std::sqrt(n); i > 0; i--) {
			if (n % i == 0) {
				std::cout << (n / i - i) << "\n";
				break;
			}
		}
	}
	return 0;
}
