#ifndef NETWORK_H
#define NETWORK_H

#include <string>

class Network {
public:
    bool connect(const std::string& url);            // Подключение к URL
    std::string fetchData(const std::string& url);   // Загрузка данных с URL
    void disconnect();                               // Отключение от сервера
private:
    std::string currentURL;                          // Хранение текущего URL
};

#endif
