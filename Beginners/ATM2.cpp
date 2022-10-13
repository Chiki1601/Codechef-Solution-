/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 13/10/22.
 * Problem link: https://www.codechef.com/problems/ATM2
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		int amt;
		std::cin >> n >> amt;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		for (int j = 0; j < n; ++j) {
			if (arr[j] <= amt) {
				std::cout << "1";
				amt -= arr[j];
			} else
				std::cout << "0";
		}
		std::cout << "\n";
	}
	return 0;
}
