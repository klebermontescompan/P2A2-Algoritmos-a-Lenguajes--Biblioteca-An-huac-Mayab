#Kleber Jesus Montes Compañ
#Ingenieria en Animacion Digital
#ID: 00623774 """
print("Digite el plazo otorgado: ")
plazo = int(input())

#asignar el articulo basado en el plazo
if plazo == 48:
    Art = "un computador"
elif plazo == 36:
    Art = "un TV de 42 pulgadas"
elif plazo == 24:
    Art = "un BlackBerry"
elif plazo == 12:
    Art = "una camara digital"
elif plazo == 6:
    Art = "una impresora"
else:
    Art = ""  #plazo invalido

#verificar y mostrar resultado
if Art != "":
    print(f"Podria llevar {Art}")
else:
    print("Error. Plazo no existe.")
