import requests
import os
from requests.auth import HTTPBasicAuth
from zipfile import ZipFile


"""
Programa para obtener los datos por medio de solicitud http , usando request y la api de kaggle, para su uso primero de debe configurar la api de kaggle https://www.kaggle.com/docs/api
y poner los datos en username y en key


"""

username = "bryancorts" # Poner el username del archivo .json
key = "98dbc3e17879852d24cc8c345cd52419" # Poner el username del archivo .json

path = "datos.zip"

url = "https://www.kaggle.com/api/v1/datasets/download/akshaydattatraykhare/car-details-dataset"
response = requests.get(url, auth=HTTPBasicAuth(username, key))

with open(path, 'wb') as f:
    f.write(response.content)
f.close()

with ZipFile(path, 'r') as zip_ref:
    zip_ref.extractall('data')
os.remove(path)