# Tarea 2

## Ejecución 

Para correr el progrma hay que seguir las siguientes indicaciones:

1. Clonar el repositorio

 ```
 git clone https://github.com/bryanco03/ie0217.git
```

2. Ponerse en el directorio Tarea_1

Si estas en Windows
 ```
  cd .\ie0217\Tareas\TAREA_DOS\
```
Si estas en linux
 ```
  cd ie0217/Tareas/TAREA_DOS/

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
4. Disfruta del Programa

5. Al finalizar puedes ejecutar el siguiente comando para eliminar los ejecutables realizados.

Si estas en windows
 ```
mingw32-make clean
```
si estas en linux

 ```
make clean
```




## Parte teórica

1. **Conceptos Fundamentales: Define qué es la programación orientada a objetos y explica sus principios fundamentales.**

La programación orientada a objetos es un paradigma de programación basado en desarrollar y organizar el codigo en objetos los cuales pueden interactuar entre ellos por medio de los atributos (propiedades, características) y métodos (acciones, funciones). Cuenta con 4 principios fundamentales los cuales son Abstracción, Herencia, Encapsulamiento y polimorfismo. 


2. **Herencia: Explica el concepto de herencia en programación orientada a objetos y proporciona un ejemplo práctico.**

La herencia en POO es un concepto el cual permite tener una clase Base o Padre el cual va a dar sus atributos y métodos a una clase derivada o hija, es bastante utilizado debido a que facilita la organización y mantenimiento del código.

Un ejemplo sería cuando se quiere trabajar con figuras geométricas, se tiene una clase base la cual es figura, y en ella se encuentra los atributos de perímetro y área, un triángulo y un rectángulo son figuras geométricas, por lo cual poseen un perímetro y una área, pero ambas figuras no son las mismas debido a que una tiene un lado más que la otra.



3. **Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante? Proporciona ejemplos de cómo se implementa en C++.**

El encapsulamiento es un concepto el cual modifica el acceso de ciertos atributos y métodos, lo cuales permite ocultar ciertos aspectos del objeto y mostrar solo los necesarios para poder interactuar con él, ayudando en la seguridad y el modularidad.

Para implementar esta característica se tiene las palabras clave de `public:` el cual da acceso  a todo el programa, `protected:` el cual limita el acceso a solo la clase base y sus clases derivadas, y por ultimo `private:` el cual limita el acceso a la clase y a funciones y clases amigas



4. **Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de tipo y polimorfismo de operador en C++.**

El polimorfismo es la capacidad de un objeto de tomar muchas formas, en otras palabras, la capacidad de mostrarse de diferentes formas ante el mismo mensaje.

El polimorfismo de tipo se da en las clases bases y sus derivadas, un ejemplo es si se tiene una clase base Animal, el cual tiene un método de hacer ruido, y otra clase derivada de Animal llamada perro, el cual también tiene implementado un método de hacer ruido, en este caso un objeto de clase perro puede hacer ruido de dos formas, por el metodo heredado por su clase base o el método implementado en la clase perro.

El polimorfismo de operador es cuando los operadores (+,-,/,*) se le definen diferentes comportamientos en una clase, por lo cual se podría definir la suma de dos clases las cuales puede que el simbolo + tenga un comportamiento diferente.



5. **Abstracción: ¿cómo se relaciona la abstracción con la programación orientada a objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.**


La abstracción es la capacidad de representar características del mundo real, en el código de manera simplificada, hay ejemplos como la creación de una clase vehículo, la cual se puede abstraer características como el número de llantas, numero de puertas, acciones como frenar, acelerar, doblar entre otras, esto hace que en la hora de programar esta clase vehículo sea más fácil.




6. **Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada a objetos. Proporciona un ejemplo de cada uno.**

Una clase es un molde o plantilla la cual en ella se pueden hacer objetos, en ellas se defiende sus atributos, características, acciones, metodos entre otros, que tendrá el objeto creado en ella, un ejemplo seria crear una clase perro, cual tiene como atributos como nombre, raza, edad, la cual define las características que pueden tener los perros.

Un objeto es el producto de esa plantilla, y fueron creados com las características definidas por la clase, aunque dos objetos creados de la misma clase no son necesariamente los mismos, siguiendo el ejemplo dado en la clase, un objeto seria si se instancia esa clase, en la cual se da el nombre, raza y edad del perro, se puede crear de esa misma clase otro objeto perro el cual puede que sea de raza diferente.


7. **Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo se utilizan en la implementación de polimorfismo.**

Los métodos virtuales son aquellos que son definidos de manera genérica en una clase base, la cual es esperado que sean redefinidas en las clases derivadas, son utilizadas en la implementación de polimorfismo el cual un metodo puede reaccionar de manera diferente debido a que puede proporcionar su propia implementación de un método definido en una clase base.


8. **Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.**

Un constructor es un método el cual llamado en el momento de crear un objeto, es utilizado principalmente  parar asignar los valores iniciales a los atributos.

un destructor es lo casi lo contrario al constructor, el cual es ejecutado cuando el objeto es eliminado, normalmente utilizado para liberar memoria y recursos que el objeto haya tenido.



9. **Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.**


la sobrecarga de operadores es una característica que permite redefinir el comportamiento de operadores como +,-,/,*  y así se observa implementación de  sobrecarga de operadores con el operador +: [1]

```
data_type operator+(parametros)
```


10. **Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil utilizar templates?**

Los templates son códigos genéricos, la idea de los templates es indicar el tipo de dato por medio de parametro, lo que le permite trabajar con diferentes tipos de datos

Son utilizados en algoritmos, contenedores, funciones en las cuales se desea que puedan sorportar diferentes tipos de datos.


11. **¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?**

La memoria dinámica es la asignación de memoria en el momento que se está ejecutando, la cual reserva un bloque de memoria en el heap, se utiliza normalmente cuando se tiene estructuras de datos que varían de tamaño en el tiempo de ejecución y gestión de recursos.


12. **Explique la diferencia entre new y malloc en C++. ¿Cúando debería utilizar uno sobre el otro?**

La mayor diferencia entre new y malloc, es que malloc asigna memoria dinámica sin inicializarla, devuelve un puntero tipo void, al cual hay que realizar un type casting para que sea el tipo de dato que se requiere trabajar, mientras que new se utiliza para asignar memoria a un objeto, y devuelve el puntero del tipo de objeto.

13. **¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en C++?**

Un memory leak es cuando se asigna memoria dinámica, pero no es liberada al finalizar el programa, y se evita liberando toda memoria asignada durante la ejecución cuando no sea necesaria o cuando se vaya a finalizar la ejecución o el uso de puntero inteligentes.

14. **Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.**

Un puntero inteligente es un puntero el cual gestiona el manejo de memoria dinámica de manera automática, por lo cual los mismos se encargan en la liberación de memoria de manera segura, ayudan a prevenir errores comunes relacionados con la gestión manual de memoria, como las fugas de memoria y los accesos a memoria liberada.


15. **¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?**

El delete se usa para liberar memoria asignada aun solo objeto creado con new y delete[] es para liberar memoria  asiganada a un arreglo de objetos creados con new[].



16. **¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?**

Un algoritmo de ordenamiento es una serie de instrucciones las cuales tienen como objetivo tomar un conjunto de elementos y organizarlos con algún criterio de comparación, son fundamentales para la hacer búsquedas eficientes, y facilitan la manipulacion de datos.


17. **Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su complejidad temporal en el peor caso?**

El Bubble sort consiste en  agarrar el primer elemento del conjunto de elementos y compararlo con el elemento adyacente, si es mayor el primer elemento se intercambian las posiciones, de  lo contrario lo compara con el elemento siguiente, así hasta que se haya recorrido la listo, este proceso es repetido hasta que no realicen ningun intercambio, lo que quiere decir que la lista esta ordenada su complejidad en el peor de los casos es O(n^2)


18. **Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cúal es su ventaja principal sobre otros algoritmos de ordenamiento?**

El QuickSort se caracteriza por dividir la lista, comienza agarrando un pivote, ya puede ser el primero, ultimo o un elemento aleatorio de la lista, a ese pivote se le compara con los demás elementos de la lista, y la divide en dos sublistas, una las cuales los elementos son menores y la otra los elementos son mayores, el mismo proceso se va haciendo recursivamente a las sublistas hasta las cada sublista contenga un solo elemento. 
Su ventaja principal ante otros algoritmos es que su complejidad temporal promedio es O(n log(n) ), mientras que los demas suelen ser O(n^2)


19. **¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable? Proporcione ejemplos de cada uno.**

Los algoritmos de ordenación estables son aquellos que preservan el orden relativo de los elementos que tienen valores iguales o claves iguales. Por otro lado, los algoritmos de ordenación inestables son aquellos que no garantizan el mantenimiento del orden relativo de los elementos con valores o claves iguales.

Ejemplos de algoritmos estables son el Bubble sort y Insertion sort, los inestables son el quick sort y el heap sort [3].



20. Hable sobre el algoritmo de ordenamiento ”Merge Sort”. ¿Cuál es su complejidad
temporal y en qué situaciones es preferible su uso?

El Merge Sort es un algoritmo recursivo que divide repetidamente el arreglo a la mitad hasta que cada subarreglo tenga solo un elemento (un arreglo con un solo elemento se considera ordenado). Luego, los subarreglos ordenados se fusionan en un solo arreglo ordenado[4].

Su complejidad temporal es  O(n log n), lo cual lo hace muy eficiente y se utilza en tareas de  listas grandes, ya que mantiene un rendimiento constante incluso cuando el tamaño de la lista aumenta. Es recomendable utilizar Merge Sort cuando se requiere una ordenación estable y se puede utilizar un algoritmo que consume más memoria adicional.



## Referencias

[1] [Microsoft learn C++ Sobrecarga operadores](https://learn.microsoft.com/es-es/cpp/cpp/operator-overloading?view=msvc-170)

[2] [GeeksForGeeks](https://www.geeksforgeeks.org/templates-cpp/)

[3] [FreeCodeCamp](https://www.freecodecamp.org/espanol/news/algoritmos-de-ordenacion-explicados-con-ejemplos-en-javascript-python-java-y-c/)



[4] [GeeksForGeeks](https://www.geeksforgeeks.org/merge-sort/)
