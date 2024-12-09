#include <iostream>
#include <vector>
#include <string>

#include <checker.h>

bool is_opening_bracket(char bracket) {
	if (bracket == '(') {
		return true;
	}
	if (bracket == '[') {
		return true;
	}
	if (bracket == '{') {
		return true;
	}
	return false;
}

char get_corresponding_opening_bracket(char bracket) {
	if (bracket == '}') {
		return '{';
	}
	if (bracket == ')') {
		return '(';
	}
	if (bracket == ']') {
		return '[';
	}
	throw std::runtime_error("The opening bracket could not be found!");
}

bool is_CBS(const std::string& S) {
	std::vector<char> stack(0);
	for (char C : S) {
		if (is_opening_bracket(C)) {
			stack.push_back(C);
		}
		else {
			if (stack.empty()) {
				return false;
			}
			if (stack.back() != get_corresponding_opening_bracket(C)) {
				return false;
			}
			else {
				stack.pop_back();
			}
		}
	}
	return stack.size() == 0;
}

bool is_subsequence(const std::string& pattern, const std::string& S) {
	if (pattern.size() > S.size()) return false;
	int pos = 0;
	for (char C : pattern) {
		while (pos < S.size() && S[pos] != C) ++pos;
		if (pos >= S.size()) {
			return false;
		}
		++pos;
	}
	return true;
}