/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/Chiki1601
 * Created on 20/11/22.
 * Problem link: https://www.codechef.com/problems/CHEFA
 */

#include<iostream>
#include<algorithm>

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
		long long int sum = 0;
		for (int j = n - 1; j >= 0; j -= 2) {
			sum += arr[j];
		}
		std::cout << sum << "\n";
	}
	return 0;
}
