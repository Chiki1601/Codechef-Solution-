/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 22/08/2022.
 * Problem link: https://www.codechef.com/problems/WALK
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
			arr[i] += i;
		}
		std::cout << *std::max_element(arr, arr + n) << "\n";
	}
	return 0;
