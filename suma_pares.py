#Kleber Jesus Montes Compañ
#Ingenieria en Animacion Digital
#ID: 00623774 """
print ("Ingrese el primer numero:")
num1 = int(input())
print ("Ingrese el segundo numero: ")
num2 = int(input())
if (num1 % 2 == 0):
    if (num1 > 0):
        if (num2 % 2 == 0):
            if (num2 > 0):
                suma = num1 + num2
                print ("La suma es: ", suma)
            else:
                print ("El segundo numero no es positivo.")
        else:
            print ("El segundo numero no es par.")
    else:
        print ("El primer numero no es positivo.")
else:
    print ("El primer numero no es par.")
    