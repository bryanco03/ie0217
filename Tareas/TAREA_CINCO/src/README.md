# Tarea 5
---
## Parte Teórica 
 ### Iteradores
 1. **¿Qué es un iterador en Python y cuál es su propósito?**

 Un iterador en Python es un objeto que permite recorrer secuencialmente los elementos de una colección, como una lista o un diccionario. Este objeto mantiene un estado interno que recuerda el elemento actual durante la iteración, lo que facilita avanzar al siguiente elemento cuando se necesita. Los iteradores proporcionan una forma eficiente y sencilla de trabajar con colecciones de datos, ya que permiten recorrer y acceder a los elementos sin necesidad de conocer los detalles de implementación subyacentes. Se utilizan comúnmente en bucles for para iterar sobre todos los elementos de una colección, así como en otros contextos donde se necesita acceder a los elementos uno por uno

 2. **Explica la diferencia entre un iterable y un iterador.**
 
Un iterable en Python es un objeto que puede ser recorrido o atravesado, esto significa que representa una colección de datos que se puede acceder secuencialmente como lo son las listas listas, tuplas, diccionarios, conjuntos y cadenas de texto, mientras que un iterador es un objeto que lleva a cabo la acción de recorrer los elementos de un iterable, y a la vez, mantiene un estado interno que le permite recordar en qué posición se encuentra actualmente durante la iteración.




 ### Excepciones
 1. **Define qué es una excepción en Python.**

 Una excepción en Python es una situación inesperada que puede surgir durante la ejecución de un programa. Estas situaciones pueden ser causadas por varios motivos, como errores de escritura en el código, problemas de lógica o eventos externos impredecibles.

 2. ¿Cuál es el propósito de la cláusula try...except en el manejo de excepciones?

La cláusula try...except en Python se emplea para gestionar excepciones de forma controlada durante la ejecución de un programa. Su propósito es mantener la ejecución del programa sin interrupciones abruptas ante errores o situaciones excepcionales. Al encerrar un bloque de código dentro de try, el programa intenta ejecutar ese código. Si surge una excepción durante la ejecución, el control se desplaza al bloque except correspondiente, donde es posible manejar la excepción de manera específica.


 3. Explica la diferencia entre las cláusulas except y finally en el manejo de excepciones.

La cláusula except se ejecuta el codigo adentro de él si se produjo una exepcion en el bloque try, mientras que en la cláusula finally es ejecutada sin importar si hay se produjo o no una excepcion.

 ### Generadores
 1. ¿Qué es un generador en Python y cuál es su ventaja sobre las listas tradicionales?

Un generador en Python es distinto de una función normal porque no devuelve todos sus valores de una sola vez, como lo haría una lista. En cambio, puede ser iterado para generar una serie de resultados, produciendo un valor a la vez. Esta forma de trabajar es más eficiente en términos de memoria, ya que no requiere almacenar todos los valores en memoria al mismo tiempo.[1]



 2. Explica cómo se puede crear un generador usando la función yield.

Para crear un generador es de forma similar al de crear una funcion, con la diferencia que en la hora de retornar un valor, no se utiliza la palabra clave `return`, se utiliza el `yield`


 3. ¿Cuándo es más apropiado usar generadores en lugar de listas?

Los generadores son más adecuados que las listas en situaciones donde la eficiencia de memoria es crucial, como cuando trabajas con grandes conjuntos de datos que no caben en la memoria disponible. También son útiles cuando necesitas generar valores bajo demanda, ya que solo se calcula y devuelve un valor cuando es necesario, lo que puede ser más eficiente que almacenar todos los valores en memoria al mismo tiempo. Los generadores también son ideales para representar secuencias infinitas o para casos en los que solo necesitas iterar sobre una secuencia una vez y no necesitas acceder a los valores nuevamente. 


 ### Pandas
 1. ¿Cuál es la diferencia entre una Serie y un DataFrame en Pandas?

 una Serie es una estructura unidimensional que puede contener cualquier tipo de datos, similar a un vector, mientras que un DataFrame es una estructura bidimensional que puede contener múltiples columnas, cada una de las cuales puede ser de un tipo diferente, similar a una matriz. 

 2. Explica cómo manejar valores nulos o faltantes en un DataFrame.

Dentro de pandas hay diversos métodos que permiten manejar esos errores como lo son el isna() y notna(), los cuales permiten verificar si existen elementos nulos, tambien hay como fillna() el cual rellena los elementos nulos a un valor pasado como parametro,
ademas de métodos como dropna() el cual elimina las filas o columnas con valores nulos entre otros métodos.


 3. ¿Cuál es la diferencia entre loc y iloc en Pandas

El loc Se utiliza para acceder a los datos utilizando etiquetas de índice. Con loc, puedes especificar las etiquetas de fila y columna para seleccionar datos y el iloc: Se utiliza para acceder a los datos utilizando índices enteros basados en posición. 

# Referencias

[1] [w3docs](https://es.w3docs.com/quiz/question/AGZ3ZN==#:~:text=Un%20generador%20en%20Python%20se%20diferencia%20de%20una,cual%20es%20m%C3%A1s%20eficiente%20en%20terminos%20de%20memoria.)
