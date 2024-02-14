# Tarea 6


## Ejecución 

Para correr el programas hay que seguir las siguientes indicaciones:

1. Clonar el repositorio

 ```
 git clone https://github.com/bryanco03/ie0217.git
```

2. Ponerse en el directorio Tarea_SEIS

Si estas en Windows
 ```
  cd .\ie0217\Tareas\TAREA_SEIS\
```
Si estas en linux
 ```
  cd ie0217/Tareas/TAREA_SEIS/

```
---

3. Configurar la API de Kaggle (Instruciones [aqui](https://www.kaggle.com/docs/api))

4. Poner los datos de Username y el key del archivo .json en el archivo de `obtener_datos.py` 

5. Ejecutar el makefile

Si estas en windows
 ```
mingw32-make
```
si estas en linux

 ```
make
```
4. Disfruta del Programa









## Parte Teórica
### **Regresión:**
 1. ¿Qué es la regresión lineal y cómo se diferencia de la regresión no lineal?

La regresión lineal es un método utilizado para hallar una ecuación que estime la relación entre una o más variables independientes y una variable dependiente. La diferencia entre una regresion lineal y una no lineal, es que en la lineal se asume que la relacion es una linea recta, mientras que una no lineal permite ajustar dicha relacion con diferentes curvas y ecuaciones de un grado mayor

 2. ¿Qué son los coeficientes de regresión y qué información proporcionan sobre la relación
 entre las variables?
 Los coeficientes de regresión representa la relación entre la variable independiente y la variable dependiente

Estos coeficientes ofrecen detalles sobre la magnitud y dirección de la relación entre las variables. Un coeficiente positivo sugiere una asociación positiva entre la variable independiente y la variable dependiente, lo que indica que un aumento en la variable independiente se relaciona con un aumento en la variable dependiente. Por el contrario, un coeficiente negativo indica una relación negativa, lo que significa que un aumento en la variable independiente se asocia con una disminución en la variable dependiente.[1]

 3. ¿Qué es el error cuadrático medio (MSE) y cómo se utiliza para evaluar la precisión
 de un modelo de regresión?


"El error cuadrático medio (MSE) es una métrica utilizada para medir la precisión de un modelo de regresión. Se calcula como la media de los cuadrados de las diferencias entre las predicciones del modelo y los valores reales de la variable dependiente en el conjunto de datos de prueba.

Un MSE bajo indica que el modelo tiene buenas predicciones, mientras que un MSE alto sugiere que las predicciones del modelo tienen mayores errores en comparación con los valores reales."


 4. ¿Cuál es la diferencia entre regresión simple y regresión múltiple y cuándo se utiliza
 cada una?

La diferencia entre la regresión lineal múltiple y la regresión lineal simple radica en la cantidad de variables independientes utilizadas. Mientras que en la regresión lineal simple se utiliza una única variable independiente, en la regresión lineal múltiple se emplean dos o más variables independientes.


 ### **Clustering:**
 1. ¿Qué es el clustering y cuál es su objetivo principal en el análisis de datos?



Clustering es una técnica de aprendizaje automático que busca agrupar conjuntos de datos similares en categorías o clústeres. Este proceso se basa en algoritmos que calculan la similitud entre los datos y los agrupan según su proximidad. El propósito principal del clustering es identificar patrones o características comunes dentro de cada grupo al encontrar estructuras subyacentes en los datos mediante la agrupación de elementos similares.[2]


2. Describa brevemente los algoritmos K-Means y DBSCAN y cámo funcionan.


K-Means es un método de agrupamiento que organiza un conjunto de datos en k grupos o clústeres. Los datos se agrupan de forma que los puntos dentro de cada clúster sean más similares entre sí que con los puntos de otros clústeres. Cada clúster está representado por su centro o centroide, que es la media de los puntos asignados a ese clúster. El algoritmo funciona iterativamente, asignando cada punto al clúster cuyo centroide está más cercano, y luego recalculando los centroides basados en los puntos asignados a cada clúster. Este proceso se repite hasta que cada punto está más cerca del centroide de su propio clúster que de los centroides de los otros.[3]


DBSCAN agrupa los puntos de datos en clústeres en función de su densidad. El algoritmo tiene dos parámetros: epsilon (ε), que determina la distancia máxima entre dos puntos para que se consideren vecinos, y minPts, que indica el número mínimo de puntos dentro de un radio ε para que un punto sea considerado central. El algoritmo comienza seleccionando un punto de datos no visitado al azar y busca todos los puntos alcanzables desde este punto dentro de ε. Si encuentra al menos minPts puntos dentro de ε, se forma un nuevo clúster con estos puntos y sus vecinos. Si no se alcanza el mínimo de puntos, el punto se clasifica como ruido. Luego, el algoritmo repite este proceso para todos los puntos no visitados hasta que todos los puntos estén asignados a un clúster o se consideren ruido.[4]



 3. ¿Qué es la inercia en el contexto del clustering y cámo se utiliza para evaluar la calidad
 de un agrupamiento?


La inercia en el clustering representa la suma de las distancias cuadradas de cada punto a su centroide en un clúster. Se utiliza para evaluar la calidad de un agrupamiento, ya que un valor más bajo de inercia indica que los puntos están más cerca de sus centroides y que los clústeres son más compactos y cohesionados




 4. ¿Qué son los centroides y cómo se utilizan en el algoritmo K-Means?


Los centroides son puntos que representan cada uno de los clústeres en el espacio de características dentro del algoritmo K-Means. Cada centroide está vinculado a un clúster y se encuentra en el centro geométrico de los puntos asignados a ese clúster.


 5. Escriba la diferencia entre datos estructurados y no estructurados para análisis de datos.



Los datos estructurados son información organizada que se encuentra comúnmente en bases de datos. Se presentan en formato de texto con columnas y filas, junto con títulos para etiquetar los datos de manera ordenada, lo que facilita su procesamiento por herramientas de análisis de datos. Por otro lado, los datos no estructurados son datos binarios que carecen de una estructura comprensible para los humanos. Se trata de una colección desordenada de objetos que no tiene valor hasta que se identifica y organiza de forma adecuada. Una vez que se organizan, los elementos que componen su contenido pueden ser categorizados para obtener información.[5]



 ### **Paquetes en Python ( init .py):**

 1. ¿Qué es un paquete en Python y cómo se diferencia de un módulo?


 un paquete en Python es un directorio que contiene archivos de código (llamados módulos) y un archivo especial `__init__.py` que indica que el directorio es un paquete. Un módulo, por otro lado, es simplemente un archivo de código de Python que puede contener funciones, clases y variables.


 2. ¿Cuál es la función del archivo \_\_init\_\_.py dentro de un paquete de Python?

El archivo `__init__.py` indica que el directorio es un paquete, y puede contener codigo que se ejecuta al importar el paquete por primera vez, como la inicialización de variables o la configuración del entorno.



 3. ¿Cómo se importa un módulo o función desde un paquete en Python?

Para importar un modulo de un paquete se utiliza la siguiente instruccion:
```
import paquete.modulo
```
Para importar una funcion del modulo
```
from paquete.modulo import funcion
```


 4. ¿Qué es la variable \_\_all\_\_ en el archivo \_\_init\_\_.py y cuál es su propósito?
 
La variable `__all__` es una lista opcional que puede ser definida en el archivo `__init__`.py de un paquete en Python. Su propósito es especificar qué módulos o símbolos (como funciones o clases) se deben importar cuando se utiliza la sintaxis `from paquete import *`.



 5. ¿Cuál es la ventaja de organizar el código en paquetes y módulos en Python?


Organizar el código en paquetes y módulos en Python ofrece ventajas significativas. Esta estructura permite una organización lógica y coherente del código, facilitando su mantenimiento y comprensión. Además, promueve la reutilización del código al dividirlo en unidades más pequeñas y especializadas, lo que facilita su uso en diferentes partes de un proyecto o en proyectos diferentes. 

 
### **Python HTTP y Servicios Web (API):**
 1. ¿Qué es una API y cuál es su función en el contexto de los servicios web?



Una API (Interfaz de Programación de Aplicaciones) es un conjunto de reglas y protocolos que permiten la integración del software entre diferentes aplicaciones. Estas reglas establecen cómo se comunican los servicios y productos digitales de manera formal. En el contexto de los servicios web, las APIs pueden utilizar varios protocolos de comunicación, como HTTP, y formatos de intercambio de datos, como JSON o XML, para definir cómo deben enviarse y recibirse los datos entre las aplicaciones cliente y el servicio web.[6]


 2. ¿Cuál es la diferencia entre una API RESTful y una API SOAP?

 
Una API RESTful es un tipo de API que se apoya en el protocolo HTTP y emplea sus métodos (GET, POST, PUT, DELETE) para efectuar operaciones sobre datos. En una API REST, los datos se representan en JSON o XML. Cada recurso (como un usuario o un producto) tiene su propio URI (Identificador de Recursos Uniforme), que se utiliza para acceder y manipular los datos asociados con ese recurso.[7]

Por otro lado una API SOAP (Simple Object Access Protocol) es un tipo de API que se basa en XML y se enfoca en establecer estándares precisos para la estructura del mensaje y los procedimientos de llamada remota. Utilizar SOAP como protocolo de comunicación, que es más pesado y complejo que HTTP. Para el intercambio de datos, emplea XML, lo que puede resultar en mensajes más grandes y complejos en comparación con JSON. Aunque más compleja, SOAP proporciona funcionalidades avanzadas y estándares estrictos para la seguridad y las transacciones, lo que la hace más adecuada para entornos empresariales y aplicaciones que requieren un alto nivel de confiabilidad y seguridad.[8]



 3. Describa los pasos básicos para consumir una API utilizando Python.

Para consumir una API en Python se tienen los siguientes pasos:
- Importar la biblioteca requests para hacer solicitudes HTTP.
- Obtener la URL de la API y envías una solicitud usando requests.get().
- Procesar la respuesta, que generalmente es en formato JSON, utilizando response.json()

 
 4. ¿Qué es la autenticación de API y por qué es importante?

 La autenticación de API es el proceso de confirmar la identidad de un usuario o aplicación que intenta acceder a una API.La autenticación por API Key ofrece una seguridad mejorada al requerir una clave única para cada solicitud, protegiendo la API contra ataques no autorizados. Además, permite un control preciso de acceso, lo que permite al propietario limitar y controlar el acceso a diferentes recursos y funcionalidades.[9]


 5. ¿Cuál es el papel de los verbos HTTP (GET, POST, PUT, DELETE) en las solicitudes
 a una API y HTTP?

- El método GET se utiliza para recuperar información identificada por el URL.

- El método PUT se emplea para solicitar al servidor que almacene el cuerpo de la entidad en una ubicación específica indicada por el URL.

- El método POST se usa para enviar información al servidor, como un archivo de actualización o datos de formulario, cuando se necesita enviar una entidad para un recurso específico.

- El método DELETE se utiliza para solicitar al servidor que elimine un archivo en una ubicación específica identificada por el URL.[10]








 # Referencias

[1] [ProbabilidadYEstadistica](https://www.probabilidadyestadistica.net/coeficiente-de-regresion/)

[2] [misapuntesdatascience](https://misapuntesdedatascience.es/que-se-entiende-por-clustering/)

[3] [themachinelearners](https://www.themachinelearners.com/k-means/)

[4] [xlstat](https://www.xlstat.com/es/soluciones/funciones/dbscan-density-based-spatial-clustering-of-applications-with-noise)

[5] [gruponext](https://gruponext.es/blog/datos-estructurados-y-no-estructurados/)

[6] [inurfp](https://unirfp.unir.net/revista/ingenieria-y-tecnologia/api/)

[7] [arqueopterix](https://arqueopterix.es/blog/cual-es-la-diferencia-entre-una-api-y-una-api-rest/)

[8] [appmaster](https://appmaster.io/es/blog/jabon-vs-reposo)

[9] [keepcoding.io](https://keepcoding.io/blog/que-es-la-autenticacion-por-api-key/)

[9] [yosoy.dev](https://yosoy.dev/peticiones-http-get-post-put-delete-etc/)