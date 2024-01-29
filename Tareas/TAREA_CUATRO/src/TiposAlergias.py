from Alergias import Alergia

def es_potencia_de_dos(numero):

    """
    Funcion para saber si  el numero es potencia de dos, por medio de operadores Bitwise
    
    """
    return (numero & (numero - 1)) == 0 and numero != 0





class TiposDeAlergias:

    """
    Clase TiposDeAlergias, la cual se encarga de ingresar  las alergias del usuario

    Atributos:

    - alergias: lista que contiene las alergias preterminadas del programa

    - alergias_usuario: lista que contiene las alergias que ingreso el usuario el cual cuentan con un nombre y valor valido

    - alergias_sin_nombre: lista que contine las alergias que el usuario ingreso sin nombre

    - alergias_sin_valor: lista que contine las alergias que el usuario ingreso sin valor

    Métodos:

    - agregar_alergia() : Agrega una alergia al atributo alergias

    - agregar_alergias_usuario(): Agrega una alergia al atributo alergias_usuario

    - obtener_alergias_usuario(): Retorna el atributo alergias_usuario

    - obtener_alergias(): Retorna el atributo alergias

    - obtener_alergias_sin_nombre(): Retorna el atributo alergias_sin_nombres

    - obtener_alergias_sin_valor(): Retorna el atributo alergias_sin_valor

    - agregar_alergia_nombre_valor() : Agrega una alergia al alergias_usuario, primero analiza si la alergia pertenece al atributo alergias y lo agrega con la informacion de ese atributo, caso contrario se crea una instacia de la clase Alergia y se agrega a alergias_usuario

    - analizar_alergia(): Analiza si el usuario ingreso el nombre o el valor de una alergia, si coincide con alguno del atributo alergias, se agrega a alergias_usuario, caso contrario se agrega  las lista de sin nombre o sin valor segun lo que corresponda.

    - buscar_alergia_por_valor(): Busca una alergia en en atributo alergias por su valor

    -  buscar_alergia_por_nombre(): Busca una alergia en en atributo alergias por su nombre

    - obtener_alergia(): se obtine una alergia del atributo alergia
    
    - esta_en_alergias_usuario() se revisa si una alergia esta en alergias_usuario
    
    """



    def __init__(self):

        """
        Inicializa una instancia de TiposDeAlergia
        
        """



        self.alergias = []
        self.alergias_usuario = []
        self.alergias_sin_nombre = []
        self.alergias_sin_valor = []

    def agregar_alergia(self, alergia):

        """
        Método para agregar una alergia al atributo alergias
        
        """


        self.alergias.append(alergia)

    def agregar_alergias_usuario(self, alergia):

        """
        Método para agregar una alergia al atributo alergias_usuario
        
        """
        self.alergias_usuario.append(alergia)

    def obtener_alergias_usuario(self):

        """
        Método para obtener la lista de alergias_usuario
        
        """

        return self.alergias_usuario

    def obtener_alergias(self):

        """
        Método para obtener la lista de alergias
        
        """


        return self.alergias

    def obtener_alergias_sin_nombre(self):

        """
        Método para obtener la lista de alergias_sin_nombre
        
        """

        return self.alergias_sin_nombre

    def obtener_alergias_sin_valor(self):

        """
        Método para obtener la lista de alergias_sin_valor
        
        """

        return self.alergias_sin_valor
    
    def agregar_alergia_nombre_valor(self, nombre, valor):

        """
            Métoda para agregar una alergia a alergias_usuario, la cual debe ser valida, recibe el nombre y el valor
            de la alergia y y comprueba si esta en la lista preterminada del sistema, si estan y los datos coinciden
            se agrega la alergia en alergias_usuario, en el caso que los datos ingresados no esten registrados en alergias
            y crea una nueva alergia y la añade a alergias_usuario
        
        """


        # Verificar si la alergia ya existe
        for alergia in self.alergias:
            if alergia.nombre.lower() == nombre.lower() and alergia.valor == valor:
                if self.esta_en_alergias_usuario(self.obtener_alergia(valor)):
                    print(f"La alergia '{nombre}' con valor '{valor}' ya ha sido agregada anteriormente.")
                    return
                else:
                    self.agregar_alergias_usuario(self.obtener_alergia(valor))
                    return
            if alergia.nombre.lower() ==  nombre.lower() and not(alergia.valor == valor):
                print(f"Error, la alergia {nombre} ya habia sido asocidada con el valor {alergia.valor}")
                return 
            if alergia.valor == valor and not(alergia.nombre.lower() ==  nombre.lower()):
                print(f"Error, el valor {valor} ya habia sido asocidada con el nombre {alergia.nombre}")
                return 
        # Si la alergia no existe, agregarla
        if es_potencia_de_dos(valor):
            nueva_alergia = Alergia(nombre, valor)
            self.agregar_alergias_usuario(nueva_alergia)
            print(f"Alergia agregada correctamente: {nombre} - {valor}")
        else:
            print("El valor de la alergia debe ser una potencia de 2.")



    def analizar_alergia(self, entrada):

        """
        Método que analiza si el usuario ingreso un valor o un nombre, y si se encuntra en la lista alergias, se añanden en 
        alergias_usuario, si no se agregan en alergias_sin_nombre o alergias_sin_valor segun como corresponda

        """


        try:
            valor = int(entrada)
            if es_potencia_de_dos(valor):
                nombre = self.buscar_alergia_por_valor(valor)
                if nombre:
                    alergia_agregar = self.obtener_alergia(valor)
                    if self.esta_en_alergias_usuario(alergia_agregar):
                        print("La alergia ya habia sido agregada")
                    else:
                        self.agregar_alergias_usuario(self.obtener_alergia(valor))
                    return nombre, valor
                else:
                    self.alergias_sin_nombre.append(valor)
                    return None, valor
            else:
                print("El valor debe ser potencia de dos.")
                return None, None
            
        # si se ingreso un string
        except ValueError:
            nombre = entrada.lower()
            valor = self.buscar_alergia_por_nombre(nombre)
            if valor:
                alergia_agregar = self.obtener_alergia(valor)
                if self.esta_en_alergias_usuario(alergia_agregar):
                    print("La alergia ya habia sido agregada")
                else:
                    self.agregar_alergias_usuario(self.obtener_alergia(valor))
                return nombre, valor
            else:
                self.alergias_sin_valor.append(nombre)
                return nombre, None

    def buscar_alergia_por_valor(self, valor):
        """
        
        Método que busca una alergia en alergias por medio de su valor, en caso de encontrarlo se retorna el nombre de la alergia
        
        """
        
        for alergia in self.alergias:
            if alergia.valor == valor:
                return alergia.nombre
        return None

    def buscar_alergia_por_nombre(self, nombre):
        """
        
        Método que busca una alergia en alergias por medio de su nombre, en caso de encontrarlo se retorna el valor de la alergia
        
        """
        for alergia in self.alergias:
            if alergia.nombre.lower() == nombre.lower():
                return alergia.valor
        return None

    def obtener_alergia(self,valor):
            
        """
        Método que busca una alergia por su valor en alergias y se retorna la alergia
        
        """
        for alergia in self.alergias:
            if alergia.valor == valor:
                return alergia
        return None
    
    def esta_en_alergias_usuario(self, alergia_buscar):

        """
        Método que indica si una alergia esta en alergias_usuario

        """
        for alergia in self.alergias_usuario:
            if alergia == alergia_buscar:
                return True
        return False
