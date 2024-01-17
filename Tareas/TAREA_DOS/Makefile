# Se detecta el OS para ejecutar los comandos correctos.
ifeq ($(OS), Windows_NT)
	FILE_EXT = exe
	CLEAN = del
	VACIO = 
	SRCDIR = src\$(VACIO)
else
	FILE_EXT = out
	CLEAN = rm -f
	SRCDIR = src/
endif

# Nombre del programa de salida
TARGET = programa.$(FILE_EXT)

# Compilador de C++
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Lista de archivos fuente

SOURCES = $(SRCDIR)funciones.cpp $(SRCDIR)Libro.cpp $(SRCDIR)main.cpp  $(SRCDIR)MaterialAudivisual.cpp $(SRCDIR)MaterialLectura.cpp $(SRCDIR)MaterialOrdenado.cpp $(SRCDIR)MaterialPrecio.cpp $(SRCDIR)Noticia.cpp $(SRCDIR)Pelicula.cpp $(SRCDIR)Podcast.cpp 
# SOURCES= $(wildcard $(SRCDIR)/*.cpp)

# Lista de archivos objeto generados a partir de los archivos fuente
OBJECTS = $(SOURCES:.cpp=.$(FILE_EXT))

# Regla por defecto 
all: build run

# Regla para compilar los archivos fuente en archivos objeto.
%.$(FILE_EXT): %.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para compilar el programa a partir de los archivos objeto.
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

#  Regla build: hace la compilacion y genera el ejecutable.
build: $(TARGET)

# Regla para limpiar los archivos generados.
.PHONY: clean
clean:
	$(CLEAN) $(TARGET) $(OBJECTS)

# Regla RUN  ejecuta el programa el programa
run:
	./$(TARGET)