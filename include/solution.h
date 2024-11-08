#pragma once

#include <string>

/*
- General information: It only works at |S| < 64, however, with such large values, this
solution will work unacceptably long, because on average systems at |S| ~ 28, the
operation time will take more than 1 second.
- Time complexity: 2^|S| * |S|
*/
std::string exponential_solution(const std::string& S);

/*
- Time complexity: |S|^3
*/
std::string polynomial_solution(const std::string& S);