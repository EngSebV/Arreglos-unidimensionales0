# Taller arreglos unidimensionales
##Sebastian Constain Valencia y Sebastian Paez Castañeda

Este proyecto permite al usuario ingresar los vértices y las caras de una figura geométrica en 3D a traves de una terminal. Despues, imprime la estructura de la figura en formato de vértices y caras.

Requisitos:
- Instalar Python

Instrucciones:
1. Ejecuta el archivo en un terminal o en un entorno de Python.
2. Introducir el número de vértices.
3. Ingresar las coordenadas (x, y, z) para cada vértice.
4. Especificar la cantidad de caras de la figura.
5. Para cada cara, ingresar la candidad de vértices que la forman y sus indices.
6. Al obtener todos los datos, el progrma imprimirá la estructura de la figura.

Ejemplo de ejecución:

Ingrese la cantidad de vertices: 4
vertice 1
Ingrese la coordenada x: 0
Ingrese la coordenada y: 0
Ingrese la coordenada z: 0
vertice 2
Ingrese la coordenada x: 1
Ingrese la coordenada y: 0
Ingrese la coordenada z: 0
vertice 3
Ingrese la coordenada x: 1
Ingrese la coordenada y: 1
Ingrese la coordenada z: 0
vertice 4
Ingrese la coordenada x: 0
Ingrese la coordenada y: 1
Ingrese la coordenada z: 0

Ingrese la cantidad de caras de la figura geometrica: 1
cara 1
Ingrese la cantidad de vértices que forman la cara: 4
Ingrese el índice del vértice 1: 0
Ingrese el índice del vértice 2: 1
Ingrese el índice del vértice 3: 2
Ingrese el índice del vértice 4: 3

estructura completa de la figura geometrica:
vértices:
v 0 0 0
v 1 0 0
v 1 1 0
v 0 1 0
Caras:
Cara 1: [0, 1, 2, 3]
