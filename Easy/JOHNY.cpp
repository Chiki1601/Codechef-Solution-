/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 24/08/22.
 * Problem link: https://www.codechef.com/problems/JOHNY
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
		int k;
		std::cin >> k;
		k = arr[k - 1];
		std::sort(arr, arr + n);
		int j = 0;
		for (; j < n; ++j) {
			if (arr[j] == k)
				break;
		}
		std::cout << j + 1 << "\n";
	}
	return 0;
}
