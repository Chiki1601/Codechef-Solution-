/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 24/08/22.
 * Problem link: https://www.codechef.com/problems/LUCKY5
 */
 
 #include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		int cnt = 0;
		for (char ch:s) {
			if (ch != '4' && ch != '7') {
				cnt++;
			}
		}
		std::cout << cnt << "\n";
	}
	return 0;
}
