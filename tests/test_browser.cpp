#include <gtest/gtest.h>
#include "Browser.h"

TEST(BrowserTest, LoadPage) {
    Browser browser;
    EXPECT_TRUE(browser.loadPage("http://example.com"));
}

TEST(BrowserTest, GoBack) {
    Browser browser;
    browser.loadPage("http://example.com");
    browser.goBack();
    EXPECT_EQ(browser.getCurrentURL(), "about:blank");
}

TEST(BrowserTest, GoForward) {
    Browser browser;
    browser.loadPage("http://example.com");
    browser.goBack();
    browser.goForward();
    EXPECT_EQ(browser.getCurrentURL(), "http://example.com");
}

TEST(BrowserTest, InvalidURL) {
    Browser browser;
    EXPECT_FALSE(browser.loadPage("invalid-url"));
}
