# Tarea 5

## Ejecución 

Para correr el programas hay que seguir las siguientes indicaciones:

1. Clonar el repositorio

 ```
 git clone https://github.com/bryanco03/ie0217.git
```

2. Ponerse en el directorio Tarea_CINCO

Si estas en Windows
 ```
  cd .\ie0217\Tareas\TAREA_CINCO\
```
Si estas en linux
 ```
  cd ie0217/Tareas/TAREA_CINCO/

```
---


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


---
## Analisis de datos
---

Al crear el programa de la primera parte de la parte teórica se puede profundizar más en los datos obtenidos en la página [Boreau of Transportation Statistics](https://www.transtats.bts.gov/DL_SelectFields.aspx?gnoyr_VQ=GFF&QO_fu146_anzr=S14z%20FMLP),la desviación estándar en el caso de las columnas suele rondar números relativamente altos, lo cual indica que los datos están muy dispersos entre sí, lo cual también se aprecia en la cantidad de valores atípicos encontrados en cada columna rondan entre los 25 - 35 valores atípicos encontrados, y al ser una muestra de alrededor de 217 datos, son una cantidad relativamente grande, ya que suelen representar alrededor de 11% al 16% de los datos totales 


Para observar lo anteriormente mencionado se graficó los gastos en pilotos y copilotos entre las horas de vuelo.

![Grafico de barras](https://github.com/bryanco03/ie0217/blob/main/Tareas/TAREA_CINCO/imagenes/Figure_1.png?raw=true)


Al observar el grafico se observa que la mayoría de puntos de concentran en la esquina inferior izquierda, aunque se aprecia que conforme se aumente las horas de vuelo hay más dispersión, también se podría aplicar una regresión lineal para ver la relación entre las variables ya que a simple vista se ve un comportamiento lineal, al realizar una regresión lineal se confirmaría si hay esa relación además de poder estimar de forma aproximada cuanto gastan las compañías areas en pilotos y copilotos por una hora de vuelo.

Por otro lado, se graficó los gastos en mantenimiento que tuvieron las aerolineas en el 2023

![Grafico de barras](https://github.com/bryanco03/ie0217/blob/main/Tareas/TAREA_CINCO/imagenes/Figure_2.png?raw=true)

En anterior gráfico se distingue cuales aerolíneas tiene más gastos en mantenimiento, se nota que la gran mayoría no sobre pasa los 10 millones de dólares, mientras las que más gastan en este aspecto son cuatro aerolíneas que rondan entre los 20 a 35 millones de dólares, en medio de estos dos grupos no hay ninguna compañía aérea, esto se ve reforzado por el número de valores atipicos encontrado, que que la mayoria de valores se concentran en valores más bajos, sin embargo hay compañías que tienen valores muchísimos más altos que a los demás.

Esta dispersión de valores también se destaca en la siguiente grafica de barras que muestra el promedio de horas de vuelo al mes de cada aerolínea con su desviacion estandar.


![Grafico de barras](https://github.com/bryanco03/ie0217/blob/main/Tareas/TAREA_CINCO/imagenes/Figure_3.png?raw=true)

En este grafico se observan de manera similar el anterior gráfico, la mayoría de las aerolíneas no superan las 2 mil horas de promedio al mes, pero son cuatro compañías que superan con creces las 2 mil horas, además se observan por las rayas negras, la desviación estándar, en la cual la mayoría de los casos son relativamente altos, por lo que indica una gran dispersión entre las horas de vuelo de una compañía aérea en un mes suele variar mucho.

también se graficó los gastos de combustibles en función de los galones de combustible utilizados.


![Grafico de barras](https://github.com/bryanco03/ie0217/blob/main/Tareas/TAREA_CINCO/imagenes/Figure_4.png?raw=true)

De forma parecida en el primer grafico los valores se agrupan en la esquina inferior izquierda, y se van esparciendo conforme se aumenta los galones de combustible, en este caso es más notorio una relación lineal debido a que los dados tienden a agruparse en forma de una recta, si se aplicara una regresión lineal se podría corroborar dicha relación y además calcular de manera aproximadamente el valor que tubo cada galón de combustible

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
