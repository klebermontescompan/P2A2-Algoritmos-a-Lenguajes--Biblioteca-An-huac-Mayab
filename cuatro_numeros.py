#Kleber Jesus Montes Compañ
#Ingenieria en Animacion Digital
#ID: 00623774 """
print ("Digite numero 1: ")
num1 = int(input())
print ("Digite numero 2: ")
num2 = int(input())
print ("Digite numero 3: ")
num3 = int(input())
print ("Digite numero 4: ")
num4 = int(input())

if (num1 > num2 and num1 > num3 and num1 > num4):
    May = num1
elif (num2 > num1 and num2 > num3 and num2 > num4):
    May = num2
elif (num3 > num1 and num3 > num2 and num3 > num4):
    May = num3
else: May = num4

print ("El numero mayor es el: ", May)