# Tarea 2

## Parte teórica

1. **Conceptos Fundamentales: Define qué es la programación orientada a objetos y
explica sus principios fundamentales.**

La programacion orientada a objetos es un paradigma de programacion basado en desarrollar y organizar el codigo en objetos los cuales pueden interacturar entre ellos por medio de los atributos(propiedades, caracteristicas) y métodos (acciones, funciones). Cuenta con 4 principios fundamentales los cuales son Abstracción, Herencia, Encapsulamiento y poliformismo. 


2. **Herencia: Explica el concepto de herencia en programación orientada a objetos y
proporciona un ejemplo práctico.**

La herencia en POO es un concepto el cual permite tener una clase Base o Padre el cual va a dar sus atributos y metódos a una clase derivada o hija, es bastante ulizado debido a que facilita la organizacion y mantenimiento del codigo.

Un ejemplo sería cuando se quiere trabajar con figuras geometricas, se tiene una clase base la cual es figura, y en ella se encuentra los atributos de perimetro y area, un triangulo y un rectangulo son figuras geometricas, por lo cual poseen un perimetro y una area, pero ambas figuras no son las mismas debido a que una tiene un lado mas que la otra.


3. **Encapsulamiento: ¿Qué es el encapsulamiento en OOP y por qué es importante?
Proporciona ejemplos de cómo se implementa en C++.**

El encapsulamiento es un concepto el cual modifica el acceso de ciertos atributos y métodos, lo cuales permite ocultar ciertos aspectos del objeto y mostrar solo los necesarios para poder interctuar con él, ayudando en la seguridad y la modularidad.

Para implementar esta caracteristica se tiene las palabras clave de `public:` el cual da acceso  a todo el programa, `protected:` el cual limita el acceso a solo la clase base y sus clases derivadas, y por ultimo `private:` el cual limita el acceso a la clase y a funciones y clases amigas


4. **Polimorfismo: Describe el polimorfismo y proporciona ejemplos de polimorfismo de
tipo y polimorfismo de operador en C++.**

El polimorfismo es la capacidad de un objeto de tomar muchas formas, en otras palabras la capacidad de mostrarse de diferentes formas ante el mismo mensaje.

El polimorfismo de tipo se dan en las clases bases y sus derivadas, un ejemplo es si se tiene una clase base Animal, el cual tiene un metodo de hacer ruido, y otra clase derivada de Animal llamada perro, el cual tambien tiene implementado un método de hacer ruido, en este caso  un objeto de clase perro puede hacer ruido de dos formas, por el metodo heredado por su clase base o el método implementado en la clase perro.

El polimorfismo de operador es cuando los operadores (+,-,/,*) se le definen diferentes comportamientos en una clase, por lo cual se podria definir la suma de dos clases las cuales puede que el simbolo + tenga un comportamiento diferente.




5. **Abstracción: ¿cómo se relaciona la abstracción con la programación orientada a
objetos? Proporciona ejemplos de cómo aplicar la abstracción en un contexto de programación.**


La abstracción es la capacidad de representar caracteristicas del mundo real, en el codigo de manera simplificada, hay ejemplos como la creacion de una clase vehiculo, la cual se puede abstraer caracteristicas como el numero de llantas,  numero de puertas, acciones como frenar, acelerar, doblar entre otras, esto hace que en la hora de programar esta clase vehiculo sea mas facil.



6. **Clases y Objetos: Diferencia entre una clase y un objeto en programación orientada
a objetos. Proporciona un ejemplo de cada uno.**

Una clase es un molde o plantilla la cual en ella se pueden hacer objetos, en ellas se defiene  sus atributos, caracteristicas, acciones, metodos entre otros, que tendra el objeto creado en ella, un ejemplo seria crear una clase perro, cual tiene como atributos como nombre, raza, edad, la cual define las caracteristicas que pueden tener los  perros.

Un objeto es el producto de esa plantilla, y fueron creados com las caracteristicas definidas por la clase, aunque dos objetos creados de la misma clase no son necesariamente los mismos, siguiendo el ejemplo dado en la clase, un objeto seria si se instancia esa clase, en la cual se da el nombre, raza y  edad del perro, se puede crear de esa misma clase otro objeto perro el cual puede que sea de raza diferente.




7. Métodos Virtuales: Explica la importancia de los métodos virtuales en C++ y cómo
se utilizan en la implementación de polimorfismo.

Los métodos virtuales son aquellos que son definidos de manera generica en una clase base, la cual es esperado que sean redefinidas en las clases derivadas,  son utilizadas en la implementacion de polimorfismo el cual un metodo puede reaccionar de manera diferente debido a que puede proporcionnar su propia implementación de un método definido en una clase base.

8. Constructores y Destructores: ¿Cuál es el propósito de un constructor y un destructor en una clase? Proporciona ejemplos de su uso.

Un construtor es un metodo el cual llamado en el momento de crear un  objeto, es utilizado principalmente  parar asignar los valores iniciales a lo atributos.

un destructor es lo casi lo contrario al constructor, el cual es ejecutado cuando el objeto es eliminado, normalmente utilizado para liberar memoria y recursos que el objeto haya tenido.


9. Sobrecarga de Operadores: Explica qué es la sobrecarga de operadores y proporciona un ejemplo de cómo se implementa en C++.

la sobrecarga de operadores es una caracteristica que permite redifinir el comportamiento de operadores como +,-,/,*  y asi se observa implemetacion de  sobrecarga de operadores con el operador +: [1]
```
data_type operator+(parametros)
```


10. Templates: Describe el concepto de templates en C++. ¿En qué situaciones sería útil
utilizar templates?

Los templates son codigos genericos, la idea de los templates es indicar el tipo de dato por medio de parametro, lo que le permite trabajar con diferentes tipos de datos

Son utlizados en algoritmos, contenedores, funciones en las cuales se desea que puedan sorportar diferentes tipos de datos.

11. ¿Qué es la memoria dinámica en C++ y cuándo se utiliza comúnmente?

La memoria dinamica es la asignacion de memoria en el momento que se esta ejecutando, la cual reserva un bloque de memoria en el heap, se utiliza normalmente cuando se tiene estructuras de datos que varian de tamaño en el tiempo de ejecucion y gestion de recursos.

12. Explique la diferencia entre new y malloc en C++. ¿Cúando debería utilizar uno sobre el otro?

    La mayor diferencia entre new y malloc, es que malloc asigna memoria dinamica sin inicializarla, duevuele un puntero tipo void, al cual hay que realizar un type casting para que sea el tipo de dato que se requiere trabajar, mientras que new se utiliza para asignar memoria a un objeto, y devuelve el puntero del tipo de objeto.


13. ¿Qué es una fuga de memoria (memory leak) y cómo puede evitarse en programas en
C++?

Un memory leak es cuando se asigna memoria dinamica,  pero no es liberada al finalizar el programa, y se evita liberando toda memoria asignada durante la ejecucion cuando no sea necesaria o cuando se vaya finalizar la ejecucion o el uso de puntero inteligentes.

14. Explique el concepto de punteros inteligentes (smart pointers) y proporcione ejemplos de su uso.

Un puntero inteligente es un puntero el cual gestiona el manejo de memoria dinamica de manera dinamica de manera automatica, por lo cual los mismos se encargan en la liberacion de memoria  de manera segura.

Cúal es la diferencia entr



15. ¿Cuál es la diferencia entre delete y delete[] en C++? ¿En qué contexto se utilizaría cada uno?

El delete se usa para liberar memoria asignada aun solo objeto y delete[] es para liberar memoria  asiganada a un arreglo de objetos.



16. ¿Qué es un algoritmo de ordenamiento y por qué son importantes en programación?

Un algoritmo de ordenamiento es una serie de intrucciones las cuales tienen como objetivo tomar un cojunto de elementos y organizarlos con algun criterio de comparacion, son fundamentales para la hacer busquedas eficientes, y facilitan la manipulacion de datos

17. Explique el funcionamiento del algoritmo de ordenamiento ”Bubble Sort”. ¿Cuál es su
complejidad temporal en el peor caso?

El Bubble sort consiste en  agarar el primer elemento del cojunto de elementos y compararlo con el elemento adyacente, si es mayor el primer elemento se intercambian las posiciones, de  lo contrario lo compara con el elemento siguiente, asi hasta que se haya recorrido la listo, este proceso es repetido hasta que no realicen ningun intercambio, lo que quiere decir que la lista esta ordenada su complejidad en el peor de los casos es O(n^2)


18. Describa el algoritmo de ordenamiento ”QuickSort”. ¿Cúal es su ventaja principal sobre otros algoritmos de ordenamiento?

El QuickSort se caracteriza por dividir la lista, comienza agarrando un pivote, ya puede ser el primero, ultimo o un elemento aleatorio de la lista, a ese pivote se le compara con los demas elementos de la lista, y la divide en dos sublistas, una las cuales los elementos son menores y la otra los elementos son mayores, el mismo proceso se va haciendo recursivamente a las sublistas hasta las cada sublista contenga un solo elemento. 
Su ventaja principal ante otros algoritmos es que su complejidad temporal promedio es O(n log(n) ), mientras que los demas suelen ser O(n^2)


19. ¿Cuál es la diferencia entre un algoritmo de ordenamiento estable y uno inestable?
Proporcione ejemplos de cada uno.

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
