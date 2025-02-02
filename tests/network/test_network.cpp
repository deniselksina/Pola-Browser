#include <gtest/gtest.h>
#include "Network.h"

TEST(NetworkTest, Connect) {
    Network network;
    EXPECT_TRUE(network.connect("http://example.com"));
}

TEST(NetworkTest, FetchData) {
    Network network;
    std::string data = network.fetchData("http://example.com");
    EXPECT_FALSE(data.empty());
}

TEST(NetworkTest, Disconnect) {
    Network network;
    EXPECT_NO_THROW(network.disconnect());
}

TEST(NetworkTest, InvalidURL) {
    Network network;
    EXPECT_FALSE(network.connect("invalid-url"));
}
