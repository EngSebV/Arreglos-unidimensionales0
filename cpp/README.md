# Taller arreglos unidimensionales

Este programa en C++ permite definir la estructura de un objeto tridimensional mediante la entrada de vértices y caras, con la capacidad de especificar el número de vértices por cada cara. Es una herramienta básica para simular la creación de una figura 3D
a partir de coordenadas de vértices y la definición de caras.
## Requisitos:
- Tener un compilador instalado (como GCC)
- Tener git instalado

## Instalación:
1. Clonar el repositorio:
``` bash
git clone https://github.com/EngSebV/Arreglos-unidimensionales0.git
```
2. Ir a la versión cpp del proyecto:
```bash
cd cpp
```
3. Compilar y correr el codigo usando un compilador:
``` bash
g++ arreglosunidim.cpp -o arreglosunidim
./arreglosunidim.cpp
```
## Instrucciones de uso
1. Ejecuta el archivo en un terminal o en un entorno de C++
2. Introducir el número de vértices.
3. Ingresar las coordenadas (x, y, z) para cada vértice.
4. Especificar la cantidad de caras de la figura.
5. Para cada cara, ingresar la candidad de vértices que la forman y sus indices.
6. Al obtener todos los datos, el progrma imprimirá la estructura de la figura.

## Ejemplo de uso
1. Compilar y correr el programa
``` bash
Ingresa el número de vértices: 4
Coordenada x del vértice 1: 0
Coordenada y del vértice 1: 0
Coordenada z del vértice 1: 0
Coordenada x del vértice 2: 1
Coordenada y del vértice 2: 0
Coordenada z del vértice 2: 0
Coordenada x del vértice 3: 1
Coordenada y del vértice 3: 1
Coordenada z del vértice 3: 0
Coordenada x del vértice 4: 1
Coordenada y del vértice 4: 1
Coordenada z del vértice 4: 1
Ingresa el número de caras: 1
¿Cuántos vértices tiene la cara 1? 4
Ingresa los índices de los 4 vértices de la cara 1 (entre 1 y 4):
1
2
3
4
```
2. resultado
``` bash
* Vértices:
v 0 0 0
v 1 0 0
v 1 1 0
v 1 1 1
* Caras:
f 1 2 3 4
```
