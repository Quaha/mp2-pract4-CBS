#include <gtest.h>
#include <string>

#include "solution.h"
#include "checker.h"

TEST(exponential_solution, sample_test1) {

	std::string seq = "";
	int ans = 0;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test2) {

	std::string seq = "(";
	int ans = 0;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test3) {

	std::string seq = "()[]";
	int ans = 4;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test4) {

	std::string seq = "(){}[]";
	int ans = 6;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test5) {

	std::string seq = "(){}[[]";
	int ans = 6;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test6) {

	std::string seq = "(((}(()]]]";
	int ans = 2;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test7) {

	std::string seq = "{{[[(())]]}}";
	int ans = 12;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test8) {

	std::string seq = "([){(})]";
	int ans = 4;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test9) {

	std::string seq = "{[()]([)({})]";
	int ans = 10;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}

TEST(exponential_solution, sample_test10) {

	std::string seq = "([)]";
	int ans = 2;

	std::string res = exponential_solution(seq);

	EXPECT_EQ(res.size(), ans);
	EXPECT_TRUE(is_CBS(res));
	EXPECT_TRUE(is_subsequence(res, seq));
}


