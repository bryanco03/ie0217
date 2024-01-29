# Se detecta el OS para ejecutar los comandos correctos.
ifeq ($(OS), Windows_NT)
	PYTHON = python
    VACIO = 
	SRCDIR = src\$(VACIO)
else
    PYTHON = python3
	SRCDIR = src/
endif

run:
    $(PYTHON) $(SRCDIR)main.py