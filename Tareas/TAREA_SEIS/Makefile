# Se detecta el OS para ejecutar los comandos correctos.
ifeq ($(OS), Windows_NT)
	PYTHON = python
    VACIO = 
	SRCDIR = analisis_carros\$(VACIO)
else
    PYTHON = python3
	SRCDIR = analisis_carros/
endif

run:
	$(PYTHON) obtener_datos.py
	$(PYTHON) $(SRCDIR)main.py

