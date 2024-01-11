# Tarea 1
---
# Juego de adivinanza

Para correr el juego hay que seguir las siguientes indicaciones

1. Clonar el repositorio

 ```
 git clone https://github.com/bryanco03/ie0217.git
```

2. Ponerse en el directorio Tarea_1

Si estas en Windows
 ```
  cd .\ie0217\Tareas\Tarea_1\
```
Si estas en linux
 ```
  cd ie0217/Tareas/Tarea_1/

```




3. Ejecutar el makefile (Asegurarse que se tenga instalado)

Si estas en windows
 ```
mingw32-make
```
si estas en linux

 ```
make
```
4. Disfruta del juego

5. Al finalizar puedes ejecutar el siguiente comando para eliminar los ejecutables realizados.

Si estas en windows
 ```
mingw32-make clean
```
si estas en linux

 ```
make clean
```





---
## Parte 1 Teorica
---
1.  **¿Cuál es la principal diferencia entre C y C++?**


La gran diferencia entre estos dos lenguajes de programación es que C++ brinda el paradigma de programación orientada a objetos, por lo que se pueden aplicar conceptos de clase, objeto, abstracción, herencia, etc; mientas que C cuenta con el paradigma de programación imperativo, además de ser procedural por lo cual no permite esos conceptos, aunque también hay diferencias entre las librerías y manejo de memoria de ambos lenguajes, la más característica más difereciante es sobre el POO.

2. **Cuáles son las diferencias fundamentales entre un lenguaje de programación compilado y uno interpretado?**

En un lenguaje compilado, como su nombre lo dice, para poder ejecutar es necesario compilarlo, por lo cual el Código fuente se pasa a un compilador, para que este lo traduzca a lenguaje de máquina, al terminar la compilación se genera un ejecutable el cual es ejecutado; mientras que un lenguaje interpretado, hace uso de un intérprete, el cual es el que se encarga de ir traduciendo conforme se va ejecutando cada línea de Código.

Los lenguajes compilados son más rápidos y eficientes, por lo cual se ser utilizados en aplicaciones que se requieran alto rendimiento y eficiencia en el manejo de recursos como lo pueden ser sistemas operativos, controladores de dispositivos, sistemas embebidos, etc.

Por otro lado, los lenguajes interpretados son más flexibles, los cuales son más fáciles en la hora realizar un programa, por lo que suelen estar presentes en aplicaciones web y scripting.



3. **Explique qué es un linker en el contexto de un lenguaje de programación compilado. ¿Cuál es su función principal y por qué es esencial en el proceso de compilación?**

El linker es una de las fases del proceso de compilación, corresponde a la fase final de compilación, el cual se encarga de reunir los objects files resultantes de las fases anteriores de compilación y bibliotecas externas, a un solo archivo ejecutable. Es muy importante debido que nos permite dividir el Código fuente en varios archivos, permitiendo modularidad, que el Código sea reutilizable y ayuda a la gestión de proyectos.


4. **Describa las diferencias clave entre los tipos de datos derivados y primarios en C++**


Los datos primarios en C++ son los datos fundamentales que cuentan el lenguaje, como los son el int, float, char, double, etc. Estos tipos de datos tienen un tamaño y rango definidos

Por otro lado, los datos derivados se derivan de los datos primarios mediante operadores y modificadores, estos son más complejos y flexibles ya que son definidas por el usuario, dando la oportunidad de abstracción mas complejo.


5. **Defina qué significa inicializar y declarar una variable.**

Declarar una variables es indicar el tipo de dato que es y el nombre de la variable, lo cual hace que se reserve una parte de memoria para esa variable. como ejemplo de declarar una variable se tiene la siguiente linea:
```
int var;
```

Mientras que inicializar una variable es asignarle un valor a una variable que ya haya sido declarada, como se observa a continuación:

 ```
 var = 1;
```



6. **¿Qué es la sobrecarga de funciones en C++ y cuáles son sus beneficios?**

La sobrecarga en funciones permite tener varias funciones de igual nombre, pero lo que se van a diferenciar entre ellas son los argumentos que reciben, los cuales deben ser de diferentes tipos.

Esta característica proporciona una mejor legibilidad, flexibilidad y permite reutilización de nombres al utilizarlo en algún programa.


7. **¿Qué es un puntero y cómo se utiliza? Explique con un ejemplo de la vida real.**

Un puntero es un tipo de variable la cual contiene la dirección de memoria de otra variable, es decir apunta donde está ubicada la variable.

Para utilizarlos en C++, al igual como cualquier variable hay que declararla e inicializarla un ejemplo de esto es lo siguiente: 

 ```
 int* ptrVar = &var;
```
En el cual el tipo de variable se acompaña con un * y además el operador & da la dirección de la variable, utilizando punteros ayuda a trabajar con memoria de forma directa y proporciona un manipulamiento de datos de manera más eficiente.

Un ejemplo en la vida real puede ser aplicado un repartidor de comida el cual posee una lista de las direcciones (como un puntero) de los lugares a los cuales tienen que entregar la comida, y va a cada lugar para entregarlo (como acceder al valor de la variable apuntada por el puntero),
el repartidor puede cambiar la lista de direcciones para llegar a otros lugares (variables).


8. **¿Una variable global almacena el valor original de una operación en una función o una copia? Explique su respuesta. Explique por qué se elige usar variables globales en lugar de locales en ciertos contextos.**

Al realizar un cambio en una función a una variable global, esta va a ser directamente cambiada, no se produce ningún tipo de copia debido que la función va a trabajar directamente con la dirección de memoria de la variable global.

Son muy pocos los contextos en los cuales se prefiera trabajar con variables globales en vez de locales, debido la dificultad para rastrear el flujo de datos y los efectos secundarios no deseados debido a la posibilidad de que varias partes del programa modifiquen la misma variable global, por lo cual no son muy utilizado, aunque se podrían utilizar si es una variable está presente en todo el Código y que esta no se modifique mucho, aun así no se aconseja el uso de estas.

9. **Investigue y explique tres métodos comunes de la biblioteca string en C++**
- Metodo append():
Este método concatena una cadena de caracteres al final de otra cadena de caracteres, un ejemplo seria lo siguiente [1]

 ```
string str1 = "Hello ";
string str2 = "World";
str1.append(str2);
cout << str1;

>>>>>Hello World
```

-Metodo length():

Este método devuelve el tamaño del string, osea la cantidad de caracteres que hay en el string, un ejemplo seria el siguiente [1]

 ```
string str1 = "Hello";
cout << str1.length();
 
>>>>> 5
```
- Metodo substr():

Este método devuelve una subcadena de caracteres dentro de la cadena original, el primer parametro que recibe es la posicion en la cual va a comenzar la subcadena, y el segundo parametro la longitud de la subcadena, un ejemplo seria el siguiente[1]



 ```
    string str1 = "Hello world";
    string str2 = str1.substr(6,5);
    cout << str2;
 
>>>>> world
```

10. **¿Cúal es la principal diferencia entre un bucle do-while y un bucle while?**

La principal diferencia entre el ciclo while y el do-while , es que en el while para ejecutar el contenido dentro de ello se tiene que cumplir la condición asignada mientras que en el do-while el código es ejecutado al menos una vez sin que la condición se cumpla.


11. **¿Es permitido almacenar funciones en una estructura en C++? En el caso de los datos, ¿se pueden encapsular en miembros privados y públicos dentro de una estructura? Explique su respuesta.**

De manera directa no es permitido, lo que se puede es almacenar en el struct un puntero el cual apunte a la función para luego tener acceso a esta.

En C++, puedes agrupar datos en estructuras y clases, y controlar su acceso mediante los conceptos de miembros públicos y privados. La principal diferencia entre una estructura y una clase en C++ es que, por defecto, los miembros de una estructura son públicos, lo que significa que pueden ser accedidos desde fuera de la estructura, mientras que los miembros de una clase son privados, lo que significa que solo pueden ser accedidos desde dentro de la clase. Sin embargo, puedes especificar explícitamente la visibilidad de los miembros utilizando las palabras clave public y private tanto en estructuras como en clases.




12. **Explique por qué es útil y común dividir el código en archivos .hpp, .cpp y main.cpp en C++. Describa el propósito específico de cada tipo de archivo.**

El separar el código en varios archivos ayuda a mantener el orden en el momento de desarrollar un programa o implementar alguna función, además hace que el código sea reutilizable y su mantenimiento sea más fácil al igual mejor la optimización del código.

Regularmente se separan en:
- main.cpp: aunque puede tener otro nombre que sea main, normalmente es llamado así debido a que es donde contiene la función main, la cual es donde se ejecuta el código.

- archivos.hpp : es conocido como el header file el cual es un archivo que contine las declaraciones de clases, funciones, definiciones  tipos de datos estructuras y directivas del preprocesador 

- archivos.cpp: Son los archivos los cuales contienen la implementación e inicialización de las clases, funciones y demás declaradas en el header file.



13. **Defina qué es el Type Casting en C++ y explique su utilidad. Proporcione ejemplos de situaciones en las que se emplea el Type Casting y cómo se realiza.**

Se conoce como Type Casting a la conversión de un tipo de variable a otra, puede ser implícita, en el cual es el compilador que lo realiza automáticamente, mientras que el explicito el desarrollador indica el tipo de dato al cual se desea convertir. 

 El type casting puede ser útil en situaciones donde se necesita convertir un tipo de dato a otro para realizar operaciones específicas o para cumplir con requisitos de funciones o métodos que esperan ciertos tipos de datos, aunque se asume la posibilidad de pérdida de memoria

 Un ejemplo de situaciones en las cuales se utiliza type casting es presentada en la parte práctica de esta tarea, en la cual el momento de calcular el número máximo intentos se divide la longitud del intervalo entre tres, pero no siempre se tiene como resultado un numero entero, por lo cual se indica que el resultado de esa operación debe ser entero, debido a que los intentos también deben ser entero.



14. **¿Por qué la sentencia goto no es recomendable en programación moderna? Mencione ejemplos de cómo se pueden lograr los mismos resultados sin el uso de goto**.

El goto es una instrucción primitiva, en el cual se salta código el cual hace que sea imposible saber la secuencia de instrucciones que se llegó a cierto punto haciendo que el código tenga una estructura de control de flujo compleja e incomprensible, haciéndolo más ilegible y difícil de dar mantenimiento.

algunos ejemplos los cuales se pueden lograr los mismos resultados sin el uso de goto son:


- Bucles

Con goto
 ```
    int i = 0;
start:
    if (i >= 10) goto end;
    cout << i << endl;
    i++;
    goto start;
end:

```

sin goto

 ```
int i = 0;
while (i < 10) {
    cout << i << endl;
    i++;
}
```
- Manejo de errores


Con goto
 ```
if (errorCondition) goto error;
// ...
error:
    // Manejo de errores

```

sin goto

 ```
 if (errorCondition) {
    // Manejo de errores
}
else {
    // ...
}

```




15. **¿Donde y cómo se guardan las variables que se crean en C++? Explique la diferencia entre el almacenamiento de variables locales y globales.** 

Las variables se guardan en diferentes lugares de la memoria dependiendo del tipo de variable, ya que la memoria tiene diferentes secciones como lo son el data, stack, heap y el code. Dentro del data son guardadas las variables globales y las estaticas, y a veces constantes, en el stack se guardan las variables locales, el heap es un bloque de memoria reservados con un malloc y el code que contiene las instrucciones del programa


16. **¿Cúal es la diferencia entre pasar parámetros por valor, por referencia y por puntero?**

Cuando se pasa un parámetro por valor, la información de la variable se guarda en una dirección de memoria distinta cuando se pasa a la función, por lo que, si cambia el valor de esa variable dentro de la función, no afecta a la variable original; solo se modifica dentro del ámbito de la función.

Cuando es por referencia, La variable que se pasa como parámetro a la función apunta directamente a la misma dirección de memoria que la variable original. Por lo tanto, si se modifica su valor dentro de la función, también se modificará la variable original.

De manera similar cuando es pasa por puntero, al este tener la dirección de memoria de la variable, cualquier cambio dentro de la función, afecta también a la variable original.


17. **Cuando se usa un puntero para apuntar a un arreglo en C++, ¿a qué valor o dirección apunta inicialmente? Describa cómo sería la forma de acceder a todos los datos de ese arreglo mediante el puntero.**

Cuando un puntero apunta a un arreglo, este apunta al primer elemento, al subíndice 0, para acceder a los demás elementos se puede realizar aritmética de punteros, por lo cual al sumarle 1 al puntero, apuntara al elemento que sigue.


18. **Explique para qué son empleados los punteros dobles en C++. Proporcione ejemplos de situaciones en las que los punteros dobles son necesarios o beneficiosos.**

Un puntero doble es un puntero que apunta a otro puntero, son empleados para manejar memoria dinámica, trabajar con matrices, como argumento en funciones que modifican punteros, los cuales llegan a ser muy útiles para cuando se requieren trabajar con estructuras de datos complejas.


19. **¿Cuál es la diferencia entre un break y un continue en los bucles de C++?**

El break termina inmediatamente el bucle, mientras que continue omite la interacción actual, pero no termina el bucle.


20. **¿Para qué se utiliza la directiva #ifndef?**

 Se utiliza para asegurarse de que un archivo de encabezado solo se incluya una vez en un programa, evitando así problemas de redefinición de símbolos y otros errores de compilación relacionados con la inclusión múltiple.

21. **¿Qué es el puntero this en C++?**

El puntero "this" es un puntero que solo está disponible dentro de las funciones miembro no estáticas de un tipo class, struct o union. Este puntero apunta al objeto para el que se ha llamado a la función miembro. [2]


22. **¿Qué es un puntero nullptr?**

Representa un valor de puntero nulo en C++. Se utiliza para indicar que un identificador de objeto, un puntero interno o un puntero nativo no apunta a ningún objeto en particular.[4]

23. ¿Cuál es la diferencia entre un arreglo y una lista en C++?

En C++, un arreglo es una estructura de datos que almacena elementos del mismo tipo en memoria de forma contigua, con un tamaño fijo que se determina en tiempo de compilación y no puede cambiar dinámicamente, por otro al referirse a la clase list de la biblioteca estándar de C++ la cual es una plantilla de clase de contenedores de secuencias que mantienen sus elementos en disposición lineal y permiten realizar inserciones y eliminaciones de manera eficiente en cualquier ubicación de la secuencia[4] y tambien se puede referir a lista enlazada, que es una estructura de datos dinámica que no requiere un tamaño fijo y puede crecer o reducirse según sea necesario.

24. ¿Qué es una función prototipo?

Una función prototipo es una declaración anticipada de una función que incluye su tipo de retorno, nombre y lista de parámetros, pero no su implementación completa.

25. ¿Investigue qué es un memory leak?

Un memory leak (fuga de memoria) ocurre cuando un programa reserva memoria dinámicamente pero no la libera adecuadamente cuando ya no es necesaria. Esto puede llevar a un uso ineficiente de la memoria, lo que puede causar problemas de rendimiento o incluso la terminación inesperada del programa debido a la falta de memoria disponible. Para evitar memory leaks, es importante liberar la memoria asignada dinámicamente cuando ya no se necesite, siguiendo buenas prácticas de gestión de memoria y utilizando técnicas modernas como punteros inteligentes cuando sea posible.[5]







---
## Parte 2 Teorica
---

1. ¿Qué suelen contener las variables CC, CFLAGS, CXXFLAGS y LDFLAGS en un makefile?

La variable CC suele contener el compilador el cual se va a utilizar en el MakeFile para generar el ejecutable.

CFLAGS y CC++FLAGS contienen los flags que se pasaran al compilador, la primera variable se suele utilizar cuando se trabaja en C y la segunda es cuando se trabaja en C++

LDFLAGS suele contener las dependencias a bibliotecas externas que el programa tiene.


2. ¿De qué se compone una regla en un Makefile?

Una regla en un makefile indica como crear un objetivo, a partir de las dependencias y con comandos.

Se compone de 
- Target: es el objetivo, el cual es el nombre del archivo por el cual se desea generar por el makefile, suelen ser archivos ejecutables, objetos o otros tipos de archivos que sean producto de una compilacion o procesos similares

- Dependencias: Son archivos los cuales son importantes para que la regla se pueda cumplir

- Comandos: las instrucciones las cuales el makefile debe ejecutar, parar, y producir el objetivo.

3. Defina qué es un target y cómo se relaciona con sus prerequisitos.

Es el archivo el cual se desea generar por medio del makefile nombre del archivo por el cual se desea generar por el makefile, suelen ser archivos ejecutables, objetos u otros tipos de archivos que sean producto de una compilación o procesos similares

Los prerrequisitos son archivos los cuales deben existir para que se genere el archivo. 



4. ¿Para qué se utiliza la bandera -I, -c y -o del compilador gcc?


La bandera -I indica el path de headers files que puedan estar en otro directorio.

La bandera -c es para indicarle al compilador que solo realice el proceso de compilación sin hacer la etapa de linker o enlazado

La bandera -o es para indicar el nombre del ejecutable de salida generado por el compilador



5. ¿Cómo se definen y se utilizan las variables en un Makefile? ¿Qué utilidad tienen?

Las variables en el makefile se utilizan para almacenar nombres de archivos, flags de compilacion, comandos, directorios, ect. para hacer el makefile reutilizable y mas legible. Se definen de la siguiente manera:

 ```
    VARIABLE = valor
```

6. ¿Qué utilidad tiene un @ en un Makefile?

Se emplea en un archivo Makefile para evitar que el comando que se ejecuta se imprima en la salida estándar.


7. ¿Para qué se utiliza .PHONY en un Makefile?

El :PHONY indica a Makefile que un objetivo no representa realmente un archivo con ese nombre. En lugar de eso, indica que el objetivo es una acción, una operación a realizar. Se utiliza ara evitar conflictos con archivos reales que puedan tener el mismo nombre que los objetivos del Makefile.[6]





## Referencias
[1] [Microsoft learn C++ standard library](https://learn.microsoft.com/es-es/cpp/standard-library/basic-string-class?view=msvc-170)


[2] [Microsoft learn C++ This Pointer](https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170)

[3] [Microsoft learn C++  nullptr](https://learn.microsoft.com/es-es/cpp/cpp/this-pointer?view=msvc-170)

[4] [Microsoft learn C++ standard library](https://learn.microsoft.com/es-es/cpp/standard-library/list-class?view=msvc-170)


[5] [Medium memory leak](https://medium.com/@rcampos.tapia/fugas-de-memoria-memory-leaks-una-fuga-que-se-puede-controlar-be39bdf096d5)


[6] [GNU Makefile](https://www.gnu.org/software/make/manual/make.html#Phony-Targets)





































