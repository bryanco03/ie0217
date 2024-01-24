# Tarea 3
---
### [Documentacion](https://stupendous-frangollo-7cdf84.netlify.app/)
---
## Ejecución 

Para correr los programas hay que seguir las siguientes indicaciones:

1. Clonar el repositorio

 ```
 git clone https://github.com/bryanco03/ie0217.git
```

2. Ponerse en el directorio Tarea_TRES

Si estas en Windows
 ```
  cd .\ie0217\Tareas\TAREA_TRES\
```
Si estas en linux
 ```
  cd ie0217/Tareas/TAREA_TRES/

```
---
### **Si deseas correr la calculadora de Matrices**


1. Ejecutar el makefile (Asegurarse que se tenga instalado)

Si estas en windows
 ```
mingw32-make
```
si estas en linux

 ```
make
```
2. Disfruta del Programa

3. Al finalizar puedes ejecutar el siguiente comando para eliminar los ejecutables realizados.

Si estas en windows
 ```
mingw32-make clean
```
si estas en linux

 ```
make clean
```
---


### **Si deseas correr el validador de correos electronicos**


1. Ejecutar el makefile con la regla correo (Asegurarse que se tenga instalado)

Si estas en windows
 ```
mingw32-make correo
```
si estas en linux

 ```
make correo
```
2. Disfruta del Programa

3. Al finalizar puedes ejecutar el siguiente comando para eliminar los ejecutables realizados.

Si estas en windows
 ```
mingw32-make cleanCorreo
```
si estas en linux

 ```
make cleanCorreo
```
---





## Parte Teórica 
- ### **Templates**
1. **Definición de Templates**:xplique el concepto de templates en C++ y
proporcione un ejemplo simple.

Los templates son plantillas de codigo generico los cuales se pueden utilizar para diferentes tipos de datos, ayuda con la reutilizacion del codigo, un ejemplo seria una funcion de sumar dos numeros, los cuales al ser un template puede funcionar para varios tipos de datos

 ```
teplate <typename T>
T suma(T num1, T num2){
    return num1 + num2;
}
  ```


2. **Sobrecarga de Plantillas**: ¿Cómo se realiza la sobrecarga de funciones con
plantillas en C++?

La sobrecarga de funciones en plantillas funcionan de manera muy similar a la sobrecarga de funciones normales, funcionan con al tener por lo menos dos funciones con argumentos diferentes, y acompañados con la palabra clave `template`


3. **Plantillas de Clases:** Explique cómo se pueden utilizar plantillas en la definición de clases en C++.

Se puden usar plantillas para crear clases genericas las que puedan manejar tipos de datos específicos sin tener que definir una clase separada para cada tipo. Para utilizarlas se utiliza la palabra `template` con los parametros del template entre los <> y en la hora de utlizar el template se propociona el tipo de dato a utilizar entre los <>


- ### **Excepciones:**

4. **Manejo de Excepciones:** Describa los bloques try, catch y throw y cómo
se utilizan para el manejo de excepciones en C++.

El bloque `try` se utiliza para encapsular el codigo el cual se desea monitoriar si ocurre una excepcion, si ocurre una excepcion el control del codigo se pasa al bloque `catch`

El bloque `catch` se utiliza junto al `try` el cual atrapa la excepcion arrojada en el `try` para manejar de manera adecuada la exepcion, pueden haber varios bloques `catch` para diferentes excepciones.

El `throw` es una palabra clave que se utiliza dentro del bloque `try` la cual tira la excepcion que es atrapada en el `catch`

5. **Excepciones Estándar:** Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser
útiles.

- runtime_error: informa de los errores que se deben a sucesos ajenos al programa y que no pueden predecirse fácilmente. se utiliza para errores que pueden detectarse durante la ejecución del programa y que no pueden ser verificados estáticamente

- logic_error informa de errores que son consecuencia de una lógica defectuosa dentro del programa, como la violación de precondiciones lógicas o invariantes de clase, y que pueden ser evitables.

- Puede utilizarse para notificar errores de rango, es decir, situaciones en las que el resultado de un cálculo no puede ser representado por el tipo de objetivo, Se suelen utilizar cuando se está trabajando con contenedores o otro tipo de datos los cuales se puede salir del rango.
[1]


6. **Política de Manejo de Excepciones:** ¿Qué es una política de manejo de
excepciones y por qué es importante considerarla al diseñar software?

Una política de manejo de excepciones es un conjunto de normas y pautas que establecen la forma en que deben manejarse las excepciones en un programa. Esto abarca decisiones sobre cuándo y dónde se generan las excepciones, cómo se transmiten a través de las llamadas a funciones y cómo se gestionan en distintos niveles del programa.
El manejo de excepciones permite a los programadores desarrollar programas más sólidos y seguros al responder de manera adecuada a los errores que puedan surgir durante la ejecución. Además, permite a los usuarios finales comprender mejor los errores que se producen y tomar las medidas necesarias para corregirlos.


7. **Noexcept:** Explica el propósito de la palabra clave noexcept y cómo se utiliza
en C++.

Se utiliza para señalar que una funcion no va a generar excepciones, por lo cual el compilador va a poder hacer optimizaciones en el momento de compilar el programa.


- ### **STL (Standard Template Library):**
8. **Contenedores STL:** Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

- **Vector:** Es un contenedor con un tamaño dinamico el cual se adapta al tamaño  necesario y se accede a los elementos por posicion,  es apropiado cuando se necesita un contenedor que pueda cambiar de tamaño dinámicamente y acceder eficientemente a los elementos por su posición (índice). Es especialmente útil cuando no necesitas insertar o eliminar elementos con frecuencia en el medio del contenedor.

- **list:**  proporciona una lista doblemente enlazada de elementos. Se utiliza cuando se necesita insertar o eliminar elementos con frecuencia en cualquier posición de la lista, aunque el acceso a elementos por posición es menos eficiente respecto al vector

- **map:** proporciona un mapeo de claves a valores únicos. Es apropiado usarlo cuando se necesita asociar claves con valores y realizar búsquedas eficientes por clave.

- **unordere_map:**  proporciona un mapeo de claves a valores con un acceso muy eficiente. Es apropiado usarlo cuando se necesita un mapeo de claves a valores y el orden de los elementos no es importante

- **set:** proporciona un conjunto ordenado de elementos únicos. Es apropiado usarlo cuando se necesita almacenar elementos únicos en un orden específico. [2]

9. **Iteradores en STL:** Explique el concepto de iteradores en la STL y cómo se
utilizan para acceder a elementos en contenedores.

Un iterador es un objeto que facilita el recorrido secuencial de los elementos de un contenedor, como un vector, una lista o un mapa, entre otros. Los iteradores ofrecen una manera consistente de acceder a los elementos de un contenedor sin importar su tipo subyacente.
Se puede usar iteradores de forma explícita con funciones miembro y globales, como begin() y end() y operadores, como ++ y -- para desplazarse hacia delante o hacia atrás. También puede usar iteradores de forma implícita con un bucle de tipo range-for o (en algunos tipos de iterador) el operador de subíndice[] [3]


10. **Algoritmos STL:** Proporcione ejemplos de al menos tres algoritmos de la
STL y describa sus funciones básicas.

- **Sort:**  o se utiliza para ordenar los elementos de un contenedor en un orden específico.

- **find:** se utiliza para buscar un valor específico en un rango de elementos.

- **accumulate:** Se utiliza para calcular la suma de los elementos en un rango

11. **Algoritmos Personalizados:** ¿Cómo podría utilizar un algoritmo personalizado con la STL?

Para emplear un algoritmo personalizado con la STL, es necesario crear una función o una clase que contenga la lógica específica del algoritmo, y después aplicarla a un contenedor o a un rango de iteradores.

- ### **Expresiones Regulares:**
12. **Definición de Expresiones Regulares:** Defina qué son las expresiones
regulares y proporcione un ejemplo simple.

son patrones de texto que se utilizan para encontrar secuencias específicas de caracteres dentro de cadenas de texto, un ejemplo seria lo siguiente: ([a-zA-Z0-9.-]+@[a-zA-Z]+\.[a-zA-Z]{2,4}) el cual es utilizado para coroborar si un correo electronico posee la forma necesaria

13. **Caracteres Especiales:** Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.



14. **Uso de Expresiones Regulares en C++:** ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

Se utilizan mediante la inclusion de la biblioteca regex, que proporciona clases y funciones para trabajar con expresiones regulares

15. **Validación de Patrones:** ¿Por qué las expresiones regulares son útiles para
la validación de patrones en cadenas de texto?

 Son útiles para validar patrones en texto porque ofrecen flexibilidad para definir patrones complejos, son eficientes en términos de tiempo de ejecución, proporcionan una forma estándar y consistente de expresar patrones, y son portables entre diferentes lenguajes y entornos de programación.


# Referencias

[1] [CPP Reference ](https://en.cppreference.com/w/cpp/error/exception)

[2] [Microsoft learn C++ ](https://learn.microsoft.com/es-es/cpp/standard-library/stl-containers?view=msvc-170)


[3] [Microsoft learn C++ ](https://learn.microsoft.com/es-es/cpp/standard-library/iterators?view=msvc-170)