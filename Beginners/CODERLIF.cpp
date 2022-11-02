/*
 * @author MIss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 2/11/22.
 * Problem link: https://www.codechef.com/problems/CODERLIF
 */


#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		bool isBored = false;
		int cnt = 0;
		for (int i = 0; i < 30; ++i) {
			bool inp;
			std::cin >> inp;
			if (inp)
				cnt++;
			else
				cnt = 0;
			if (cnt > 5)
				isBored = true;
		}
		if (isBored)
			std::cout << "#coderlifematters\n";
		else
			std::cout << "#allcodersarefun\n";
	}
	return 0;
}
