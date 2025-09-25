#include <gtest/gtest.h>
#include "../is_palindrom.h"

TEST(PalindromTest, BasicPalindroms) {
    EXPECT_TRUE(is_palindrom(121));
    EXPECT_TRUE(is_palindrom(12321));
    EXPECT_TRUE(is_palindrom(1));
    EXPECT_TRUE(is_palindrom(0));
}

TEST(PalindromTest, BasicNonPalindroms) {
    EXPECT_FALSE(is_palindrom(123));
    EXPECT_FALSE(is_palindrom(1234));
    EXPECT_FALSE(is_palindrom(10));
}

TEST(PalindromTest, NegativeNumbers) {
    EXPECT_FALSE(is_palindrom(-121));
    EXPECT_FALSE(is_palindrom(-1));
}
