n1 = int(input("1º Número: "))
n2 = int(input("2º Número: "))
n3 = int(input("3º Número: "))
if n1 % 2 == 0 and n1 % 3 == 0 or n2% 2 == 0 and n2 % 3 == 0 or n3 % 2 == 0 and n3 % 3 == 0:
    if n1 % 2 == 0 and n1 % 3 == 0:
        print(f"O número {n1} é divesível por 2 e por 3")
    if n2 % 2 == 0 and n2 % 3 == 0:
        print(f"O número {n2} é divesível por 2 e por 3")
    if n3 % 2 == 0 and n3 % 3 == 0:
        print(f"O número {n3} é divesível por 2 e por 3")
else:
    print("Nenhum dos números é divisível por 2 e por 3")
