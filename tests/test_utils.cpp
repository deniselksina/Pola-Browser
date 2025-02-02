#include <gtest/gtest.h>
#include "Utils.h"

TEST(UtilsTest, Trim) {
    std::string input = "   hello   ";
    EXPECT_EQ(Utils::trim(input), "hello");
}

TEST(UtilsTest, StringToInt) {
    EXPECT_EQ(Utils::stringToInt("123"), 123);
    EXPECT_THROW(Utils::stringToInt("abc"), std::invalid_argument);
}

TEST(UtilsTest, IsValidURL) {
    EXPECT_TRUE(Utils::isValidURL("http://example.com"));
    EXPECT_FALSE(Utils::isValidURL("invalid-url"));
}
