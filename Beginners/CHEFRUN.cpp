/*
 * @author Pooja Anilkumar Patel(Chiki1601)
 * github: http://www.github.com/schiki1601
 * Created on 23/08/2022.
 * Problem link: https://www.codechef.com/problems/CHEFRUN
 */
#include <iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int t;
	std::cin >> t;
	while (t--) {
		int x1;
		int x2;
		int x3;
		int v1;
		int v2;
		std::cin >> x1 >> x2 >> x3 >> v1 >> v2;
		double dist1 = x3 - x1;
		double dist2 = x2 - x3;
		double ans1 = dist1 / v1;
		double ans2 = dist2 / v2;
		if (ans1 < ans2)
			std::cout << "Chef\n";
		else if (ans1 == ans2)
			std::cout << "Draw\n";
		else
			std::cout << "Kefa\n";
	}
	return 0;
}
