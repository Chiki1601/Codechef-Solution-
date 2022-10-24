/*
 * @author Shubham Kumar Gupta (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 24/10/22.
 * Problem link: https://www.codechef.com/problems/CK87MEDI
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
		int k;
		std::cin >> n >> k;
		int arr[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr[i];
		}
		std::sort(arr, arr + n);
		std::cout << arr[(n + k) / 2] << "\n";
	}
	return 0;
}
