#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <string>

class WebView {
public:
    void initialize();              // Инициализация WebView
    void loadURL(const std::string& url);  // Загрузка URL
    void render();                  // Рендеринг контента
    void close();                   // Закрытие WebView
    bool isActive() const;          // Проверка, активен ли WebView
};

#endif
