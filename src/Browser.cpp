#include "Browser.h"

void Browser::loadPage(const std::string& url) {
    // Код для загрузки страницы
    currentPage = fetchPage(url);
}

void Browser::render() {
    // Код для рендеринга текущей страницы
    renderPage(currentPage);
}
