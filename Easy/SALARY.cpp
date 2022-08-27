/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 27/08/2022.
 * Problem link: https://www.codechef.com/problems/SALARY
 */


#include<iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int sum = 0;
		int mn = 10000;
		int x;
		for (int i = 0; i < n; i++) {
			std::cin >> x;
			sum += x;
			mn = std::min(x, mn);
		}
		std::cout << (sum - (mn * n)) << "\n";
	}
	return 0;
}
