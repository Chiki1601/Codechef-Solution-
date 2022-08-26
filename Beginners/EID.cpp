/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 26/08/2022.
 * Problem link: https://www.codechef.com/problems/EID
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
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr, arr + n);
		int mn = arr[1] - arr[0];
		for (int i = 2; i < n; ++i) {
			mn = std::min(mn, arr[i] - arr[i - 1]);
		}
		std::cout << mn << "\n";
	}
	return 0;
}
