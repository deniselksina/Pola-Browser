#ifndef NETWORK_H
#define NETWORK_H

#include <string>

class Network {
public:
    bool connect(const std::string& url);
    std::string fetchData(const std::string& url);
};

#endif
