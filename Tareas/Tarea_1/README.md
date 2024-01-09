# Tarea 1
---
## Parte 1 Teorica
---
1.  **¿Cuál es la principal diferencia entre C y C++?**

La gran diferencia entre estos dos lenguajes de programacion es que C++ brinda el paradigma de programacion orientada a objetos, por lo que se pueden aplicar conceptos de clase, objeto, abstracion, herencia, etc; mientas que C cuenta con el paradigma de programacion imperativo, ademas de ser procedural por lo cual no permite esos conceptos, aunque tambien hay diferencias entre las librerias y manejo de memoria de ambos lenguajes, la mas caracteristica es sobre el POO.


2. **Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?**

En un lenguaje compilado, como su nombre lo dice, para poder ejecutar es necesario compilarlo, por lo cual el codigo fuente se pasa a un compilador, para que este lo traduzca a lenguaje de maquina, al terminar la compilacion se genera un ejecutable el cual es ejecutado; mientras que un lenguaje interpretado, hace uso de un interprete, el cual es el que se encarga de ir traduciendo conforme se va ejecutando cada linea de codigo.

Los lenguajes compilado son mas rapidos y eficientes, por lo cual se ser utilizados en aplicaciones que se requieran alto rendimiento y eficiencia en el manejo de recursos como lo pueden ser sistemas operativos, controladores de dispositivos, sistemas embebidos, etc.

Por otro lado, los lenguajes interpretados son mas flexibles, los cuales son mas faciles en la hora realizar un programa, por lo que suelen estar presentes en aplicaciones web y scripting.

3. **Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

El linker es una de las fases del proceso de compilacion, corresponde a  la fase final de compilacion, el cual se encarga de reunir los objects files resultantes de las fases anteriores de compilacion y bibliotecas externas, a un solo archivo ejecutable. Es muy importante debido que nos permite dividir el codigo fuente en varios archivos, permitiendo modularidad, que el codigo sea reutilizable y ayuda a la gestion de proyetos.

4. **Describa las diferencias clave entre los tipos de datos derivados y primarios en C++**

Los datos primarios en C++ son los datos fundamentales que cuentan el lenguaje, como los son el int, float, char, double, etc. Estos tipos de datos tienen un tamaño y rango definidos

Por otro lado los datos derivados se derivan de los datos primarios mediante operadores y modificadores, estos son mas complejos y flexibles ya que son definidas por el usuario, dando la oportunidad de abstracion mas complejo.


5. **Defina qué significa inicializar y declarar una variable.**

Declarar una variables es indicar el tipo de dato que es y el nombre de la variable, lo cual hace que se reserve una parte de memoria para esa variable. como ejemplo de declarar una variable se tiene la siguiente linea:
```
int var;
```

Mientras que inicializar una variable es asignarle un valor a una variable que ya haya sido declarada, como se observa a continuacion:

 ```
 var = 1;
```



6. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

La sobrecarga en funciones permite tener varias funciones de igual nombre, pero lo que se van diferenciar entre ellas son los argumentos que reciben, los cuales deben ser de diferentes tipos.

Esta caracteristica propociona una mejor legibilidad, flexibilidad y permite reutilizacion de nombres al utilizarlo en algun programa.

7. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

Un puntero es un tipo de variable la cual contiene la dirrecion de memoria de otra variable, es decir apunta donde esta ubicada la variable.

Para utilizarlos en C++, al igual como cualquier variable hay que declararla e inicianizarla un ejemplo de esto es lo siguiente 
 ```
 int* ptrVar = &var;
```
En el cual el tipo de variable se acompaña con un  * y ademas el operador & da la direccion de la variable, utilizando punteros ayuda a trabajar con memoria de forma directa y propocina un manipulamiento de datos de manera mas eficiente.

Un ejemplo en la vida real puede ser aplicado un repartidor de comida el cual posee una lista de las direcciones (como un puntero) de los lugares a los cuales tienen que entregar la comida, y va a cada lugar para entregarlo (como acceder al valor de la variable apuntada por el puntero),
el repartidor puede cambiar las lista de direciones para llegar a otros lugares (variables).


8. **¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.**

Al realizar un cambio en una funcion a una variable global, esta va a ser directamente cambiada, no se produce ningun tipo de copia debido que la funcion va a trabajar directamente con la direcion de memoria de la variable global.

Son muy pocos los contextos en los cuales se prefiera trabajar con variables globales en vez de locales, debido la dificultad para rastrear el flujo de datos y los efectos secundarios no deseados debido a la posibilidad de que varias partes del programa modifiquen la misma variable global, por lo cual no son muy utilizado, aunque se podrian utilizar si es una variable esta presente en todo el codigo y que esta no se modifique mucho,aun asi no se aconseja el uso de estas.

9. **Investigue y explique tres métodos comunes de la biblioteca string en C++**
- Metodo append():
Este metodo concatena una cadena de caracteres al final de otra cadena de caracteres, un ejemplo seria lo siguiente [1]

 ```
string str1 = "Hello ";
string str2 = "World";
str1.append(str2);
cout << str1;

>>>>>Hello World
```

-Metodo length():

Este metodo devuelve el tamaño del string, osea la cantidad de caracteres que hay en el string, un ejemplo seria el siguiente [1]

 ```
string str1 = "Hello";
cout << str1.length();
 
>>>>> 5
```
- Metodo substr():

Este metodo devuelve una subcadena de caracteres dentro de la cadena original, el primer parametro que recibe es la posicion en la cual va a comenzar la subcadena, y el segundo parametro la longitud de la subcadena, un ejemplo seria el siguiente[1]



 ```
    string str1 = "Hello world";
    string str2 = str1.substr(6,5);
    cout << str2;
 
>>>>> world
```

10. **¿Cúal es la principal diferencia entre un bucle do-while y un bucle while?**

La principal diferecia entre el ciclo while y el do-while , es que en el while para ejecutar el contenido dentro de ello se tiene que cumplir la condicion asignada mientras que en el do-while el codigo es ejecutado al menos una vez sin que la condicion se cumpla.

11. **¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y p´ublicos dentro de una estructura? Explique su respuesta.**

12. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**

El separar el codigo en varios archivos ayuda a mantener el orden en el momento de desarollar un programa o implementar alguna funcion, ademas hace que el codigo sea reutilizable y su mantenimiento sea mas facil al igual mejor la optimizacion del codigo.

Regularmente se separan en:
- main.cpp: aunque puede tener otro nombre que sea main, normalmente es llamado asi debido a que es donde contiene la funcion main, la cual es donde se ejecuta el codigo.

- archivos.hpp : es conocido como el header file el cual es un archivo que contine las declaraciones de clases, funciones, definiciones  tipos de datos estruturas y directivas del preprocesador 

- archivos.cpp: Son los archivos los cuales contienen la implementacion y inicializacion de las clases, funciones y demas declaradas en el header file.



13. **Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.**

Se conoce como Type Casting a la conversion de de un tipo de variable a otra, puede ser implicita, en el cual es el compilador que lo realiza automaticamente, mientras que el explicito el desarrollador indica el tipo de dato al cual se desea convertir. 

 El type casting puede ser útil en situaciones donde se necesita convertir un tipo de dato a otro para realizar operaciones específicas o para cumplir con requisitos de funciones o métodos que esperan ciertos tipos de datos, aunque se asume la posibilidad de perdidia de memoria

 Un ejemplo de situaciones en las cuales se utiliza type casting  es presentada en la parte practica de esta tarea, en la cual el momento de calcular el numero maximo intentos se divide la longuitud del intervalo entre tres, pero no siempre se tiene como resultado un numero entero, por lo cual se indica que el resultado de esa operacion debe ser entero, debido a que los intentos tambien debe ser entero.



14. ¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto.

15. **¿Donde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.** 

Las variables se guardan en diferentes lugares de la memoria dependiendo del tipo de variable, ya que la memoria tiene diferentes secciones como lo son el data, stack, heap y el code. Dentro del data son guardadas las variables globales y las estaticas, y aveces constantes, en el stack se guardan las variables locales, el heap es un bloque de memoria reservados con un malloc y el code que contiene las instruciones del programa


16. **¿Cúal es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

Cuando se pasa un parametro por valor, la información de la variable se guarda en una dirección de memoria distinta cuando se pasa a la función, por lo que si cambia el valor de esa variable dentro de la función, no afecta a la variable original; solo se modifica dentro del ámbito de la función.

Cuando es por referencia,La variable que se pasa como parámetro a la función apunta directamente a la misma dirección de memoria que la variable original. Por lo tanto, si se modifica su valor dentro de la función, también se modificará la variable original.

De manera similar cuando es pasa por puntero, al este tener la direccion de memoria de la variable, cualquier cambio dentro de la funcion, afecta tambien a la variable original.


17. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

Cuando un puntero apunta a un arreglo, este apunta al primer elemento, al subindice 0, para acceder a los demas elementos se puede realizar arimetica de punteros, por lo cual al sumarle 1 al puntero, apuntara al elemento que sigue.



18. Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.

19. **¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

El break termina inmediatamente el bucle, mientras que continue omite la iteracion actual, pero no termina el bucle.

20. ¿Para qué se utiliza la directiva #ifndef?

 se utiliza para asegurarse de que un archivo de encabezado solo se incluya una vez en un programa, evitando así problemas de redefinición de símbolos y otros errores de compilación relacionados con la inclusión múltiple.

21. **¿Qué es el puntero this en C++?**

El puntero "this" es un puntero que solo está disponible dentro de las funciones miembro no estáticas de un tipo class, struct o union. Este puntero apunta al objeto para el que se ha llamado a la función miembro. [2]


22. ¿Qué es un puntero nullptr?

23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?

24. ¿Qué es una función prototipo?

25. ¿Investigue qué es un memory leak?

---
## Parte 2 Teorica
---

1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?

La variable CC suele contener el compilador el cual se va a utilizar en el MakeFile para generar el ejecutable.

CFLAGS y CC++FLAGS contienen los flags que se pasaran al compilador, la primer variable se suele utilizar cuando se trabaja en C y la segunda es cuando se trabaja en C++


LDFLAGS suele contener las dependencias a biblioteas externas que el programa tiene.

2. ¿De qué se compone una regla en un Makefile?


3. Defina qué es un target y cómo se relaciona con sus prerequisitos.
4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?
5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?
6. ¿Qué utilidad tiene un @ en un Makefile?
7. ¿Para qué se utiliza .PHONY en un Makefile?














## Referencias
[1] [Microsoft learn C++ standard library](https://learn.microsoft.com/es-es/cpp/standard-library/basic-string-class?view=msvc-170)


[12 [Microsoft learn C++ This Pointer](https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170)





































