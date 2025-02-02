cmake_minimum_required(VERSION 3.10)

project(PolaBrowser)

# Установите стандарт C++
set(CMAKE_CXX_STANDARD 17)

# Указываем папку с исходным кодом
include_directories(${PROJECT_SOURCE_DIR}/include)

# Добавляем исходные файлы
set(SOURCE_FILES
    src/main.cpp
    src/App.cpp
    src/Browser.cpp
    src/Utils.cpp
    src/Network.cpp
    src/GUI.cpp
    src/WebView.cpp
)

# Создание исполняемого файла
add_executable(PolaBrowser ${SOURCE_FILES})

# Добавление зависимостей, например, на библиотеки
# target_link_libraries(PolaBrowser <library>)
