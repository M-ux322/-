#include <gtest/gtest.h>
#include "../is_palindrom.h"

TEST(PalindromTest, BasicPalindroms) {
    EXPECT_TRUE(is_palindrom("121"));
    EXPECT_TRUE(is_palindrom("12321"));
    EXPECT_TRUE(is_palindrom("1"));
    EXPECT_TRUE(is_palindrom("0"));
    EXPECT_TRUE(is_palindrom("racecar"));
    EXPECT_TRUE(is_palindrom("a"));
}

TEST(PalindromTest, BasicNonPalindroms) {
    EXPECT_FALSE(is_palindrom("123"));
    EXPECT_FALSE(is_palindrom("1234"));
    EXPECT_FALSE(is_palindrom("10"));
    EXPECT_FALSE(is_palindrom("hello"));
}

TEST(PalindromTest, EdgeCases) {
    EXPECT_TRUE(is_palindrom(""));
    EXPECT_TRUE(is_palindrom("a"));
    EXPECT_TRUE(is_palindrom("aa"));
}
