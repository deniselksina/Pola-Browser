#include "Utils.h"

std::string Utils::trim(const std::string& str) {
    // Удаляет пробелы в начале и в конце строки
    size_t start = str.find_first_not_of(" \t\n\r");
    size_t end = str.find_last_not_of(" \t\n\r");
    return str.substr(start, end - start + 1);
}

int Utils::stringToInt(const std::string& str) {
    return std::stoi(str);  // Преобразует строку в целое число
}
