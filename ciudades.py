#Kleber Jesus Montes Compañ
#Ingenieria en Animacion Digital
#ID: 00623774 """
print("Digite el indicativo:")
indicativo = int(input())
print("Digite # de minuto: ")
num_min = int(input())
if (indicativo == 1):
    val = num_min * 50
    ciudad = "Bogota"
    tarifa = 50
elif (indicativo == 2):
    val = num_min * 70
    ciudad = "Cali"
    tarifa = 70
elif (indicativo == 4):
    val = num_min * 100
    ciudad = "Medellin"
    tarifa = 100
elif (indicativo == 5):
    val = num_min * 160
    ciudad = "Barranquilla"
    tarifa = 160
elif (indicativo == 6):
    val = num_min * 180
    ciudad = "Pereira"
    tarifa = 180
elif (indicativo == 7):
    val = num_min * 190
    ciudad = "Cucuta"
    tarifa = 190
else:
    print("Indicativo no existe.")
    val = 0
    ciudad = "Ninguna"
    tarifa = 0

print("Ciudad a la que marca: ", ciudad)
print("Tarifa: $", tarifa)
print("Valor llamada: $", val)