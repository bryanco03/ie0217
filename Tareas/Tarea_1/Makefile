# Definición de variables
CC = g++ # Compilador a utilizar
CFLAGS = -std=c++11 -Wall # Opciones de compilación
TARGET = adivina.exe # Nombre del ejecutable
SRCS = main.cpp funciones.cpp # Archivos fuente
#OBJS = $(SRCS:.cpp=.exe) # Archivos objeto generados



# Detección del sistema operativo
ifeq ($(OS),Windows_NT)
    # Comandos para limpiar la consola en Windows
    CLEAN_COMMAND = del
	OBJS = $(SRCS:.cpp=.exe) # Archivos objeto generados
	FILE =.exe
else
	CLEAN_COMMAND = rm
	OBJS = $(SRCS:.cpp=.o) # Archivos objeto generados
	FILE =.o
endif


# Regla por defecto: all
all: build run

# Regla para construir el ejecutable
build: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar los archivos fuente a archivos objeto
%$(FILE): %.cpp
	$(CC) $(CFLAGS) -c $< -o $@



# Regla para limpiar los archivos generados
clean:
	$(CLEAN_COMMAND) $(OBJS) $(TARGET)

# Regla para ejecutar el programa
run:
	./$(TARGET) 