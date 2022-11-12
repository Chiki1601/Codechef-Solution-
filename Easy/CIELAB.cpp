/*
 * @author Miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 12/11/22.
 * Problem link: https://www.codechef.com/problems/CIELAB
 */

#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int a;
	int b;
	std::cin >> a >> b;
	int ans = a - b;
	if (ans % 10 == 9)
		ans--;
	else
		ans++;
	std::cout << ans;
	return 0;
}
