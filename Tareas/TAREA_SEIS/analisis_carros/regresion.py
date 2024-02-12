import matplotlib.pyplot as plt
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import mean_squared_error
from sklearn.metrics import r2_score, mean_absolute_error
from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline
import numpy as np
from mpl_toolkits.mplot3d import Axes3D
import pandas as pd

def regresion_lineal(df):
    # obtener dator
    x_year = df['year'].values.reshape(-1, 1)
    y_km_driven = df['km_driven'].values

    # Graficar los datos
    plt.scatter(x_year, y_km_driven, label='Datos')
    
    # Realizar la regresión lineal
    X_train, X_test, y_train, y_test = train_test_split(x_year, y_km_driven, test_size=0.2, random_state=42)

    model_simple = LinearRegression()
    model_simple.fit(X_train, y_train)
    y_pred = model_simple.predict(X_test)

    mse_simple = mean_squared_error(y_test, y_pred)
    r2 = r2_score(y_test, y_pred)
    mae = mean_absolute_error(y_test, y_pred)
    print(f"Error cuadrático medio (MSE): {mse_simple}")
    print(f"Coeficiente de determinación (R²): {r2}")
    print(f"Error absoluto medio (MAE): {mae}")


    plt.plot(X_test, y_pred, color='red', label='Regresión lineal')
    
    # Añadir etiquetas y leyenda
    plt.xlabel('Año')
    plt.ylabel('Kilometraje')
    plt.title('Regresión lineal de kilometraje vs año')
    plt.legend()
    
    # Mostrar el gráfico
    plt.show()

def regresion_lineal2(df):
    # obtener dator
    x_year = df['year'].values.reshape(-1, 1)
    y_km_driven = df['selling_price'].values

    # Graficar los datos
    plt.scatter(x_year, y_km_driven, label='Datos')
    
    # Realizar la regresión lineal
    X_train, X_test, y_train, y_test = train_test_split(x_year, y_km_driven, test_size=0.2, random_state=42)

    model_simple = LinearRegression()
    model_simple.fit(X_train, y_train)
    y_pred = model_simple.predict(X_test)

    mse_simple = mean_squared_error(y_test, y_pred)
    r2 = r2_score(y_test, y_pred)
    mae = mean_absolute_error(y_test, y_pred)
    print(f"Error cuadrático medio (MSE): {mse_simple}")
    print(f"Coeficiente de determinación (R²): {r2}")
    print(f"Error absoluto medio (MAE): {mae}")

    plt.plot(X_test, y_pred, color='red', label='Regresión lineal')
    
    # Añadir etiquetas y leyenda
    plt.xlabel('Año')
    plt.ylabel('Precio de venta')
    plt.title('Regresión lineal del precio de venta  vs año')
    plt.legend()
    
    # Mostrar el gráfico
    plt.show()


def regresion_no_lineal(df, grado):
    # Obtener datos
    x_year = df['year'].values.reshape(-1, 1)
    y_km_driven = df['km_driven'].values

    # Graficar los datos
    plt.scatter(x_year, y_km_driven, label='Datos')

    # Crear un modelo de regresión polinomial
    model_poly = make_pipeline(PolynomialFeatures(grado), LinearRegression())
    model_poly.fit(x_year, y_km_driven)

    # Predecir los valores y calcular métricas
    y_pred = model_poly.predict(x_year)
    mse_poly = mean_squared_error(y_km_driven, y_pred)
    r2_poly = r2_score(y_km_driven, y_pred)
    mae_poly = mean_absolute_error(y_km_driven, y_pred)

    # Imprimir las métricas
    print(f"Error cuadrático medio (MSE) en regresión polinomial de grado {grado}: {mse_poly}")
    print(f"Coeficiente de determinación (R²) en regresión polinomial de grado {grado}: {r2_poly}")
    print(f"Error absoluto medio (MAE) en regresión polinomial de grado {grado}: {mae_poly}")

    # Graficar la regresión polinomial
    x_values = np.linspace(min(x_year), max(x_year), 100).reshape(-1, 1)
    plt.plot(x_values, model_poly.predict(x_values), color='red', label=f'Regresión polinomial (grado {grado})')

    # Añadir etiquetas y leyenda
    plt.xlabel('Año')
    plt.ylabel('Kilometraje')
    plt.title(f'Regresión polinomial de kilometraje vs año (grado {grado})')
    plt.legend()

    # Mostrar el gráfico
    plt.show()

def regresion_no_lineal2(df, grado):
    # Obtener datos
    x_year = df['year'].values.reshape(-1, 1)
    y_price = df['selling_price'].values

    # Graficar los datos
    plt.scatter(x_year, y_price, label='Datos')

    # Crear un modelo de regresión polinomial
    model_poly = make_pipeline(PolynomialFeatures(grado), LinearRegression())
    model_poly.fit(x_year, y_price)

    # Predecir los valores y calcular métricas
    y_pred = model_poly.predict(x_year)
    mse_poly = mean_squared_error(y_price, y_pred)
    r2_poly = r2_score(y_price, y_pred)
    mae_poly = mean_absolute_error(y_price, y_pred)

    # Imprimir las métricas
    print(f"Error cuadrático medio (MSE) en regresión polinomial de grado {grado}: {mse_poly}")
    print(f"Coeficiente de determinación (R²) en regresión polinomial de grado {grado}: {r2_poly}")
    print(f"Error absoluto medio (MAE) en regresión polinomial de grado {grado}: {mae_poly}")

    # Graficar la regresión polinomial
    x_values = np.linspace(min(x_year), max(x_year), 100).reshape(-1, 1)
    plt.plot(x_values, model_poly.predict(x_values), color='red', label=f'Regresión polinomial (grado {grado})')

    # Añadir etiquetas y leyenda
    plt.xlabel('Año')
    plt.ylabel('Kilometraje')
    plt.title(f'Regresión polinomial de precio de venta vs año (grado {grado})')
    plt.legend()

    # Mostrar el gráfico
    plt.show()

def regresion_lineal_3d(df):
    # extraer datos
    x_year_y_km_driven = df[['year', 'km_driven']]
    z_price = df['selling_price']
    # Crear un modelo de regresión lineal
    model = LinearRegression()

    # Ajustar el modelo a los datos
    model.fit(x_year_y_km_driven, z_price)

    # Predecir valores
    y_pred = model.predict(x_year_y_km_driven)


    # Calcular el Mean Squared Error (MSE)
    mse = mean_squared_error(z_price, y_pred)
    print('Mean Squared Error (MSE):', mse)

    # Calcular el Mean Absolute Error (MAE)
    mae = mean_absolute_error(z_price, y_pred)
    print('Mean Absolute Error (MAE):', mae)

    # Calcular el coeficiente de determinación (R^2)
    r2 = r2_score(z_price, y_pred)
    print('Coeficiente de determinación (R^2):', r2)


    # Crear un gráfico 3D
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # Graficar los puntos
    ax.scatter(df['year'], df['km_driven'], df['selling_price'], color='red')

    # Graficar el plano de regresión
    x1_surf, x2_surf = np.meshgrid(np.linspace(df['year'].min(), df['year'].max(), 100), np.linspace(df['km_driven'].min(), df['km_driven'].max(), 100))
    y_surf = model.intercept_ + model.coef_[0] * x1_surf + model.coef_[1] * x2_surf
    ax.plot_surface(x1_surf, x2_surf, y_surf, alpha=0.5)

    # Configurar etiquetas y título
    ax.set_xlabel('Año')
    ax.set_ylabel('Kilometraje')
    ax.set_zlabel('Precio de venta')
    ax.set_title('Regresión lineal con 3 variables')

    # Mostrar gráfico
    plt.show()
def regresion_no_lineal_3d(df):
    # extraer datos
    x_year_y_km_driven = df[['year', 'km_driven']]
    z_price = df['selling_price']
    # Crear transformaciones polinómicas de las características
    poly = PolynomialFeatures(degree=3)
    X_poly = poly.fit_transform(x_year_y_km_driven)

    # Crear un modelo de regresión lineal
    model = LinearRegression()

    # Ajustar el modelo a los datos polinómicos
    model.fit(X_poly, z_price)

    # Predecir valores
    y_pred = model.predict(X_poly)

    # Calcular el Mean Squared Error (MSE)
    mse = mean_squared_error(z_price, y_pred)
    print('Mean Squared Error (MSE):', mse)

    # Calcular el Mean Absolute Error (MAE)
    mae = mean_absolute_error(z_price, y_pred)
    print('Mean Absolute Error (MAE):', mae)

    # Calcular el coeficiente de determinación (R^2)
    r2 = r2_score(z_price, y_pred)
    print('Coeficiente de determinación (R^2):', r2)

    # Crear un gráfico 3D
    fig = plt.figure()
    ax = fig.add_subplot(111, projection='3d')

    # Graficar los puntos
    ax.scatter(df['year'], df['km_driven'], df['selling_price'], color='red')

    # Crear una superficie polinómica para visualizar la regresión no lineal
    x1_surf, x2_surf = np.meshgrid(np.linspace(df['year'].min(), df['year'].max(), 100), np.linspace(df['km_driven'].min(), df['km_driven'].max(), 100))
    X_surf = pd.DataFrame({'year': x1_surf.ravel(), 'km_driven': x2_surf.ravel()})
    X_poly_surf = poly.transform(X_surf)
    y_surf = model.predict(X_poly_surf)
    ax.plot_surface(x1_surf, x2_surf, y_surf.reshape(x1_surf.shape), alpha=0.5)

    # Configurar etiquetas y título
    ax.set_xlabel('Año')
    ax.set_ylabel('Kilometraje')
    ax.set_zlabel('Precio de venta')
    ax.set_title('Regresión no lineal con 3 variables')

    # Mostrar gráfico
    plt.show()







