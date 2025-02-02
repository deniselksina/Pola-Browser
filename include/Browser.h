#ifndef BROWSER_H
#define BROWSER_H

#include <string>

class Browser {
public:
    void loadPage(const std::string& url);  // Загрузка страницы
    void render();                          // Рендеринг страницы
    void goBack();                          // Переход назад
    void goForward();                       // Переход вперед
    std::string getCurrentURL() const;      // Получение текущего URL
private:
    std::string currentPage;                // Хранение текущей страницы
};

#endif
