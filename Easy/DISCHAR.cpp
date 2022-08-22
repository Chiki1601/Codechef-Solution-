/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 22/08/2022.
 * Problem link: https://www.codechef.com/problems/DISCHAR
 */


#include <iostream>
#include <unordered_set>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		std::string s;
		std::cin >> s;
		std::unordered_set<char> st;
		for (char ch:s)
			st.insert(ch);
		std::cout << st.size() << "\n";
	}
	return 0;
}
