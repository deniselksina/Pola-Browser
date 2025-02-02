#include "Network.h"
#include <iostream>

bool Network::connect(const std::string& url) {
    // Логика подключения к URL
    std::cout << "Connecting to " << url << std::endl;
    return true;
}

std::string Network::fetchData(const std::string& url) {
    // Логика получения данных с URL
    std::cout << "Fetching data from " << url << std::endl;
    return "<html>Content</html>";
}
