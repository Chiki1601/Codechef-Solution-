/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 16/10/22.
 * Problem link: https://www.codechef.com/problems/CHEFSQ
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t=0;
	std::cin >> t;
	while (t--) {
		int n=0;
		std::cin >> n;
		int arr1[n];
		for (int i = 0; i < n; ++i) {
			std::cin >> arr1[i];
		}
		int f=0;
		std::cin >> f;
		int arr2[f];
		for (int i = 0; i < f; ++i) {
			std::cin >> arr2[i];
		}
		int pos = 0;
		for (int i = 0; i < n; i++) {
			if (arr1[i] == arr2[pos])
				pos++;
		}
		if (pos == f)
			std::cout << "Yes\n";
		else
			std::cout << "No\n";
	}
	return 0;
}
