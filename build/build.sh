#!/bin/bash

# Установка компилятора и флагов
CXX=g++
CXXFLAGS="-std=c++17 -Wall -I./include"

# Исходные файлы
SRC="src/main.cpp src/App.cpp src/Browser.cpp src/Utils.cpp src/Network.cpp src/GUI.cpp src/WebView.cpp"

# Цель сборки
TARGET="PolaBrowser"

# Сборка проекта
$CXX $CXXFLAGS $SRC -o $TARGET

# Проверка успешности сборки
if [ $? -eq 0 ]; then
    echo "Сборка завершена успешно."
else
    echo "Ошибка сборки."
fi
