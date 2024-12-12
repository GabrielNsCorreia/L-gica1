n1 = int(input("Numero 1: "))
n2 = int(input("Numero 2: "))
n3 = int(input("Numero 3: "))
n4 = int(input("Numero 4: "))
n5 = int(input("Numero 5: "))
cont1 = 0
cont2 = 0
while cont1 != 1:
    if n1>n2 and n1>n3 and n1>n4 and n1>n5:
        cont1 = 1
        print(f"Maior = {n1}")
    else:
        auxiliar = n1
        n1 = n2
        n2 = n3
        n3 = n4
        n4 = n5
        n5 = auxiliar
  
while cont2 != 1:
    if n1<n2 and n1<n3 and n1<n4 and n1<n5:
        cont2 = 1
        print(f"Menor = {n1}")
    else:
        auxiliar = n1
        n1 = n2
        n2 = n3
        n3 = n4
        n4 = n5
        n5 = auxiliar
        