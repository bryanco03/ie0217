import requests

# paso 1 realizar solicitud para obtener datos de los usuarios
users_response = requests.get('https://jsonplaceholder.typicode.com/users')
users_data =  users_response.json()

# paso 2 realizar solicitud para obtener datos de publicaciones
posts_response = requests.get('https://jsonplaceholder.typicode.com/posts')
posts_data = posts_response.json()

# paso 3 procesar datos, obtener info relevante
users_post = {}

for user in users_data:
    users_post[user['id']] = []

for post in posts_data:
    user_id = post.get('userId') # .get()   para evitar KeyError
    if user_id in users_post:
        users_post[user_id].append({
            'title': post['title'],
            'body': post['body']
        })

# paso 3 mostrar resultados
for user_id, posts in users_post.items():
    user = next((user for user  in users_data if user['id'] == user_id), None)
    if user:
        print(f"\nPublicaciones de {user['name']} ({user['email']}):\n")
        for post in posts:
            print(f"Title: {post['title']}\nBody: {post['body']}\n")
    else:
        print(f"No se encontraron datos para el usuario con ID {user_id}")