@echo off

:: Установка компилятора и флагов
set CXX=g++
set CXXFLAGS=-std=c++17 -Wall -I.\include

:: Исходные файлы
set SRC=src\main.cpp src\App.cpp src\Browser.cpp src\Utils.cpp src\Network.cpp src\GUI.cpp src\WebView.cpp

:: Цель сборки
set TARGET=PolaBrowser.dll

:: Сборка проекта
%CXX% %CXXFLAGS% %SRC% -o %TARGET%

:: Проверка успешности сборки
if %errorlevel% == 0 (
    echo Сборка завершена успешно.
) else (
    echo Ошибка сборки.
)
pause
