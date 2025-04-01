# Entrada de vertices del usuario
num_vertices = int(input("ingrese la cantidad de vertices: "))

# Lista para almacenar la cantidad de vértices
vertices = []

# for para obtener cada vértice
for i in range(num_vertices):
    print("vertice " + str((i + 1)))
    x = int(input("Ingrese la coordenada x: "))
    y = int(input("Ingrese la coordenada y: "))
    z = int(input("Ingrese la coordenada z: "))

    # Añade a la lista de vertices los vértices
    vertices.append((x, y, z))

# ingresa la cantidad de caras que quiere el usuario  
num_caras = int(input("ingrese la cantidad de caras de la figura geometrica: "))

# Lista para almacenar la cantidad de caras de la figura
caras = []

# for para obtener la cantidad de vertices
for i in range(num_caras):
    print("cara " + str((i + 1)))
    num_indices = int(input("Ingrese la cantidad de vértices que forman la cara: "))
    cara = []
# for para obtener los indices para cada cara
    for j in range(num_indices):
        indice = int(input("Ingrese el índice del vértice " + str(j + 1) + ": "))
        cara.append(indice)
    caras.append(cara)

# Imprime todos los vertices y todas las caras
print("estructura completa de la figura geometrica:")
print("vértices:")
i = 0

# Imprime vértices
for vertice in vertices:
    x, y, z = vertice
    print("v " + str(x) + " " + str(y) + " " + str(z))
    i += 1

# Imprime caras
print("Caras:")
i = 0
for cara in caras:
    print("Cara " + str(i + 1) + ": " + str(cara))
    i += 1
