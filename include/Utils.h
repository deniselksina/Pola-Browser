#ifndef UTILS_H
#define UTILS_H

#include <string>

class Utils {
public:
    static std::string trim(const std::string& str);     // Удаление пробелов в начале и в конце строки
    static int stringToInt(const std::string& str);      // Преобразование строки в целое число
    static bool isValidURL(const std::string& url);      // Проверка валидности URL
};

#endif
