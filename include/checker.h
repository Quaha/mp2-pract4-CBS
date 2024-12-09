#pragma once

#include <string>

bool is_opening_bracket(char bracket);
char get_corresponding_opening_bracket(char bracket);

bool is_CBS(const std::string& S);
bool is_subsequence(const std::string& pattern, const std::string& S);