/*
 * @author Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 29/08/2022.
 * Problem link: https://www.codechef.com/problems/OJUMPS
 */


#include<iostream>

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long long int n;
	std::cin >> n;
	n %= 6;
	if (n == 0 || n == 1 || n == 3)
		std::cout << "yes";
	else
		std::cout << "no";
	return 0;
}
