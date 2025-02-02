#ifndef WEBVIEW_H
#define WEBVIEW_H

#include <string>

class WebView {
public:
    void initialize();
    void loadURL(const std::string& url);
    void render();
    void close();
};

#endif
