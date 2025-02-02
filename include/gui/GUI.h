#ifndef GUI_H
#define GUI_H

#include <string>

class GUI {
public:
    void initialize();   // Инициализация графического интерфейса
    void render();       // Отображение интерфейса
    void handleEvents(); // Обработка событий (клик, клавиши и т. д.)
    void showError(const std::string& message); // Показ ошибки
    void update();       // Обновление состояния интерфейса
};

#endif
