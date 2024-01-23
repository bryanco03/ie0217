# Tarea 3

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

Se puden usar plantillas para crear clases genericas las cual ayudan a cr 



- ### **Excepciones:**

4. **Manejo de Excepciones:** Describa los bloques try, catch y throw y cómo
se utilizan para el manejo de excepciones en C++.

El bloque `try` se utiliza para encapsular el codigo el cual se desea monitoriar si ocurre una excepcion, si ocurre una excepcion el control del codigo se pasa al bloque `catch`

El bloque `catch` se utiliza junto al `try` el cual atrapa la excepcion arrojada en el `try` para manejar de manera adecuada la exepcion, pueden haber varios bloques `catch` para diferentes excepciones.

El `throw` es una palabra clave que se utiliza dentro del bloque `try` la cual tira la excepcion que es atrapada en el `catch`

5. **Excepciones Estándar:** Nombre al menos tres excepciones estándar proporcionadas por C++ y proporciona ejemplos de situaciones en las que podrían ser
útiles.
6. **Política de Manejo de Excepciones:** ¿Qué es una política de manejo de
excepciones y por qué es importante considerarla al diseñar software?




7. **Noexcept:** Explica el propósito de la palabra clave noexcept y cómo se utiliza
en C++.

Se utiliza para señalar que una funcion no va a generar excepciones, por lo cual el compilador va a 


- ### **STL (Standard Template Library):**
8. **Contenedores STL:** Nombre cinco contenedores diferentes de la STL y explique brevemente en qué situaciones sería apropiado usar cada uno.

- **Vector:** Es un contenedor con un tamaño dinamico el cual se adapta al tamaño  necesario y se accede a los elementos por posicion

- **list:**

- **map:**

- **unordere_map:**

- **set:**

9. **Iteradores en STL:** Explique el concepto de iteradores en la STL y cómo se
utilizan para acceder a elementos en contenedores.

10. **Algoritmos STL:** Proporcione ejemplos de al menos tres algoritmos de la
STL y describa sus funciones básicas.

11. **Algoritmos Personalizados:** ¿Cómo podría utilizar un algoritmo personalizado con la STL?

- ### **Expresiones Regulares:**
12. **Definición de Expresiones Regulares:** Defina qué son las expresiones
regulares y proporcione un ejemplo simple.

13. **Caracteres Especiales:** Enumere al menos tres caracteres especiales comúnmente utilizados en expresiones regulares y describa sus funciones.

14. **Uso de Expresiones Regulares en C++:** ¿Cómo se utilizan las expresiones regulares en C++? Proporciona un ejemplo.

15. **Validación de Patrones:** ¿Por qué las expresiones regulares son útiles para
la validación de patrones en cadenas de texto?