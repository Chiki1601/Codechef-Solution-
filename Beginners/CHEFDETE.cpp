/*
 * @author Miss Pooja Anilkumar Patel(chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 8/11/22.
 * Problem link: https://www.codechef.com/problems/CHEFDETE
 */

#include <iostream>
#include <algorithm>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int n;
	std::cin >> n;
	bool arr[n + 1];
	std::fill(arr + 1, arr + n + 1, true);
	for (int i = 1; i <= n; ++i) {
		int pos;
		std::cin >> pos;
		arr[pos] = false;
	}
	for (int i = 1; i <= n; ++i) {
		if (arr[i]) {
			std::cout << i << " ";
		}
	}
	return 0;
}
