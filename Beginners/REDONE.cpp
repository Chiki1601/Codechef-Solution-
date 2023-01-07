/*
 * @author miss Pooja Anilkumar Patel (chiki1601)
 * github: http://www.github.com/chiki1601
 * Created on 7/01/2023.
 * Problem link: https://www.codechef.com/problems/REDONE
 */

#include <iostream>

#define MOD 1000000007

int main() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	long dp[1000001];
	dp[1] = 1;
	for (int i = 2; i < 1000001; ++i) {
		dp[i] = ((i * dp[i - 1]) % MOD + (i + dp[i - 1]) % MOD) % MOD;
	}
	int q;
	std::cin >> q;
	while (q--) {
		int x;
		std::cin >> x;
		std::cout << dp[x] << "\n";
	}
	return 0;
}
