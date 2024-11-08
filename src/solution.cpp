#include <iostream>
#include <vector>
#include <string>

#include "solution.h"
#include "checker.h"

std::string exponential_solution(const std::string& S) {
	int N = S.size();

	if (N >= 64) throw std::logic_error("The program will not be able to complete its work in a reasonable time!");

	std::string result = "";

	for (long long mask = 0; mask < (1ll << N); ++mask) {
		std::string temp = "";
		for (int i = 0; i < N; i++) {
			if ((1ll << i) & mask) {
				temp.push_back(S[i]);
			}
		}
		if (is_CBS(temp) && temp.size() > result.size()) {
			result = temp;
		}
	}

	return result;
}

std::string polynomial_solution(const std::string& S) {
	int N = S.size();

	if (N == 0) {
		return "";
	}

	std::vector<std::vector<std::string>> dp(N, std::vector<std::string> (N, ""));
	for (int i = 0; i < N - 1; i++) {
		if (!is_opening_bracket(S[i + 1]) && S[i] == get_corresponding_opening_bracket(S[i + 1])) {
			dp[i][i + 1] = S.substr(i, 2);
		}
	}

	for (int d = 3; d <= N; d++) {
		for (int l = 0; l + d - 1 < N; l++) {
			int r = l + d - 1;
			dp[l][r] = dp[l + 1][r - 1];
			if (!is_opening_bracket(S[r]) && get_corresponding_opening_bracket(S[r]) == S[l]) {
				dp[l][r].insert(dp[l][r].begin(), S[l]);
				dp[l][r].insert(dp[l][r].end(), S[r]);
			}
			int best_cut = l;
			int best_cut_result = dp[l][l].size() + dp[l + 1][r].size();
			for (int c = l + 1; c < r; c++) {
				if (dp[l][c].size() + dp[c + 1][r].size() > best_cut_result) {
					best_cut_result = dp[l][c].size() + dp[c + 1][r].size();
					best_cut = c;
				}
			}
			if (best_cut_result > dp[l][r].size()) {
				dp[l][r] = dp[l][best_cut] + dp[best_cut + 1][r];
			}
		}
	}

	return dp[0][N-1];
}