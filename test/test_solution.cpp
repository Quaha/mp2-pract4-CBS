#include <gtest.h>
#include <string>

#include "solution.h"
#include "checker.h"

TEST(exponential_solution, sample_test1_exponential) {

	std::string seq = "";
	int ans = 0;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test2_exponential) {

	std::string seq = "(";
	int ans = 0;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test3_exponential) {

	std::string seq = "()[]";
	int ans = 4;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test4_exponential) {

	std::string seq = "(){}[]";
	int ans = 6;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test5_exponential) {

	std::string seq = "(){}[[]";
	int ans = 6;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test6_exponential) {

	std::string seq = "(((}(()]]]";
	int ans = 2;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test7_exponential) {

	std::string seq = "{{[[(())]]}}";
	int ans = 12;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test8_exponential) {

	std::string seq = "([){(})]";
	int ans = 4;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test9_exponential) {

	std::string seq = "{[()]([)({})]";
	int ans = 10;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test10_exponential) {

	std::string seq = "([)]";
	int ans = 2;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test1_polynomial) {

	std::string seq = "";
	int ans = 0;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test2_polynomial) {

	std::string seq = "(";
	int ans = 0;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test3_polynomial) {

	std::string seq = "()[]";
	int ans = 4;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test4_polynomial) {

	std::string seq = "(){}[]";
	int ans = 6;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test5_polynomial) {

	std::string seq = "(){}[[]";
	int ans = 6;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test6_polynomial) {

	std::string seq = "(((}(()]]]";
	int ans = 2;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test7_polynomial) {

	std::string seq = "{{[[(())]]}}";
	int ans = 12;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test8_polynomial) {

	std::string seq = "([){(})]";
	int ans = 4;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test9_polynomial) {

	std::string seq = "{[()]([)({})]";
	int ans = 10;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, sample_test10_polynomial) {

	std::string seq = "([)]";
	int ans = 2;

	std::string res = polynomial_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(polynomial_solution, stress_test) {

	int CNT_OF_TESTS = 100;
	int MAX_STRING_SIZE = 20;

	std::srand(time(0));

	for (int TEST_CASE = 0; TEST_CASE < CNT_OF_TESTS; TEST_CASE++) {
		int N = rand() % MAX_STRING_SIZE;

		std::string seq = "";
		std::vector<char> brackets = { '(', ')', '{', '}', '[', ']' };
		for (int i = 0; i < N; i++) {
			seq.push_back(brackets[rand() % brackets.size()]);
		}

		int ans = exponential_solution(seq).size();

		std::string res = polynomial_solution(seq);

		EXPECT_EQ(res.size(), ans);
		EXPECT_TRUE(is_CBS(res));
		EXPECT_TRUE(is_subsequence(res, seq));
	}
}


