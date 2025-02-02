#ifndef APP_H
#define APP_H

#include <string>

class App {
public:
    void initialize();   // Инициализация приложения
    void run();          // Основной цикл приложения
    void shutdown();     // Завершение работы приложения
private:
    std::string appName; // Имя приложения
};

#endif
