import requests
import os
from requests.auth import HTTPBasicAuth
from zipfile import ZipFile

username = "bryancorts"
key = "98dbc3e17879852d24cc8c345cd52419"
path = "analisis_carros\datos.zip"

url = "https://www.kaggle.com/api/v1/datasets/download/akshaydattatraykhare/car-details-dataset"

response = requests.get(url, auth=HTTPBasicAuth(username, key))

with open(path, 'wb') as f:
    f.write(response.content)
f.close()

with ZipFile(path, 'r') as zip_ref:
    zip_ref.extractall('data')

os.remove(path)
