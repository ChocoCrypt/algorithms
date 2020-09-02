import matplotlib.pyplot as plt



# Creamos las bases

barWidth = 0.9

bars1 = []

bars2 = []

r1 = []

r2 = []



#guardamos los archivos de texto en las listas bars1 y bars2

archivo = open("hash0.txt", 'r')

for linea in archivo.readlines():

    bars1.append(int(linea))

archivo.close()



archivo = open("hash64.txt", 'r')

for linea in archivo.readlines():

    bars2.append(int(linea))

archivo.close()



# creamos las posiciones

for i in range (101):

    x= (2*i)+1

    r1.append(x)



for i in range (101):

    y= 2*i

    r2.append(y)



# Create barplot

plt.bar(r1, bars1, width = barWidth, color = (0.3,0.1,0.4,0.6), label='Hash0')

plt.bar(r2, bars2, width = barWidth, color = (0.3,0.5,0.4,0.6), label='Hash64')

plt.legend()

plt.ylabel('Count');

plt.xlabel('Table Position')

plt.title('Collitions')

plt.subplots_adjust(bottom= 0.2, top = 0.98)



# Show graphic

plt.show()
