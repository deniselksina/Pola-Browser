#include <gtest/gtest.h>
#include "WebView.h"

TEST(WebViewTest, Initialize) {
    WebView webview;
    EXPECT_NO_THROW(webview.initialize());
}

TEST(WebViewTest, LoadURL) {
    WebView webview;
    EXPECT_NO_THROW(webview.loadURL("http://example.com"));
}

TEST(WebViewTest, Render) {
    WebView webview;
    EXPECT_NO_THROW(webview.render());
}

TEST(WebViewTest, Close) {
    WebView webview;
    EXPECT_NO_THROW(webview.close());
}

TEST(WebViewTest, IsActive) {
    WebView webview;
    webview.initialize();
    EXPECT_TRUE(webview.isActive());
}
