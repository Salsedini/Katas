def esprimo (num):
    contador=0
    for i in range(1,num+1):
        if num%i==0:
            contador=contador+1
        if contador>2:
            return False
    return True


num = int (input("El número límite para saber si es primo: "))

for i in range(1,num+1):

    if esprimo(i):
        print("El número", i, "es primo")

