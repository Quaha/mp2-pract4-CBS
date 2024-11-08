#include <string>
#include <iostream>

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
	return "";
}