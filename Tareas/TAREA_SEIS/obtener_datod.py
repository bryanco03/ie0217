import os
import requests
from zipfile import ZipFile
#import kaggle

# Definir las credenciales de la API de Kaggle
os.environ['KAGGLE_USERNAME'] = 'bryancorts'
os.environ['KAGGLE_KEY'] = '98dbc3e17879852d24cc8c345cd52419'

# ID del conjunto de datos que deseas descargar desde Kaggle
dataset_id = 'akshaydattatraykhare/car-details-dataset'

# URL de la API de Kaggle para descargar el conjunto de datos
url = f'https://www.kaggle.com/api/v1/datasets/download/{dataset_id}'

# Ruta donde guardarás el archivo descargado
download_path = 'ie0217\Tareas\TAREA_SEIS\data\dataset.zip'

# Realizar la solicitud GET para descargar el archivo
response = requests.get(url, stream=True)

# Guardar el archivo descargado en el sistema
with open(download_path, 'wb') as file:
    for chunk in response.iter_content(chunk_size=1024):
        if chunk:
            file.write(chunk)

# Descomprimir el archivo descargado si es un archivo zip
with ZipFile(download_path, 'r') as zip_ref:
    zip_ref.extractall('ie0217\Tareas\TAREA_SEIS\data\dataset')


