/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 15/10/22.
 * Problem link: https://www.codechef.com/problems/CHEFSUM
 */

#include <vector>
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
		std::vector<int> arr(n);
		int inp;
		for (int i = 0; i < n; ++i) {
			std::cin >> inp;
			arr[i] = inp;
		}
		std::cout << std::min_element(arr.begin(), arr.end()) - arr.begin() + 1 << "\n";
	}
	return 0;
}
