
import requests


# Ejemplo GET 
payload = {'clave1': 'valor1', 'clave2': 'valor2'}
response = requests.get('https://ejemplo.com/ruta', params=payload)
print(response.text)


# Ejemplo POST
payload = {'usuario':'juan', 'contrasena': 'secreta'}
response = requests.post('https: //ejemplo.com/login', data=payload)
print(response.text)

payload = {'usuario': 'juan', 'contrasena': 'secreta'}
response = requests.post('https://ejemplo.com/login', json=payload)
print(response.text)


# Manejo de Respuesta 
response = requests.get('https://jsonplaceholder.typicode.com/todos/1')
print(response.status_code)
print(response.headers)
print(response.json()) #Si la respuesta es JSON


# Manejo de Errores
try:
    response = requests.get('https://ejemplo.com/pagina-inexistente')
    response.raise_for_status() # Genera una excepción si hay un error.HTTP
    print(response.text)
except requests.exceptions.HTTPError as err:
    print(f"Error HTTP: {err}")

