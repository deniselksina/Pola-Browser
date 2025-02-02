# Компилятор
CXX = g++

# Флаги компиляции
CXXFLAGS = -std=c++17 -Wall -I./include

# Исходные файлы
SRC = src/main.cpp src/App.cpp src/Browser.cpp src/Utils.cpp src/Network.cpp src/GUI.cpp src/WebView.cpp

# Исполняемый файл
TARGET = PolaBrowser

# Правила для сборки
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# Очистка
clean:
	rm -f $(TARGET)
