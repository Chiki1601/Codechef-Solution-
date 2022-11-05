/*
 * @author MIss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 08/03/20.
 * Problem link: https://www.codechef.com/problems/AMSGAME1
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)
			std::cin >> arr[i];
		int gcd = arr[0];
		for (int i = 1; i < n; i++)
			gcd = std::__gcd(arr[i], gcd);
		std::cout << gcd << "\n";
	}
	return 0;
}
