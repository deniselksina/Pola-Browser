#include <gtest/gtest.h>
#include "App.h"
#include "Browser.h"
#include "Utils.h"

TEST(AppTest, Initialization) {
    App app;
    EXPECT_NO_THROW(app.initialize());
}

TEST(BrowserTest, LoadPage) {
    Browser browser;
    EXPECT_TRUE(browser.loadPage("http://example.com"));
}

TEST(UtilsTest, StringToInt) {
    EXPECT_EQ(Utils::stringToInt("123"), 123);
}

TEST(NetworkTest, Connect) {
    Network network;
    EXPECT_TRUE(network.connect("http://example.com"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
