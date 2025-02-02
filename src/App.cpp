#include "App.h"

void App::run() {
    // Инициализация ресурсов
    initWindow();
    initBrowser();
    
    // Основной цикл приложения
    while (isRunning()) {
        processEvents();
        render();
    }
}
