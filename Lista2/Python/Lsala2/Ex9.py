n1 = int(input("1º Número: "))
n2 = int(input("2º Número: "))
if n1 % 4 == 0 or n1 % 5 == 0 or n2 % 4 == 0 or n2 % 5 == 0:
    if n1 % 2 == 0 or n1 % 3 == 0:
        print(f"O número {n1} é divesível por 4 ou por 5")
    if n2 % 2 == 0 or n2 % 3 == 0:
        print(f"O número {n2} é divesível por 4 ou por 5")
else:
    print("Nenhum dos números é divisível por 4 ou por 5")
