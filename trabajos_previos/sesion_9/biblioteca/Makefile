# Nombre del progama
TARGET = gestion_gestion.exe

all: $(TARGET)

# Compilador de C++
CXX = g++

# Opciones de compilacion 
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente
SOURCES = main.cpp libro.cpp biblioteca.cpp

# Lista de archivos generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.exe)

# Regla para compilar los archivos fuente
%.exe: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objectos
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regla para limpiar los archivos generados
.PHONY: clean
clean:
	del $(TARGET) $(OBJECTS)