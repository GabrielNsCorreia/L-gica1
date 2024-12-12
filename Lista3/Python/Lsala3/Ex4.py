num = int(input("Entre com um número menor ou igual a 50: "))
if num <= 50:
    while num < 250:
        num = num * 3
    print(num/3)
else:
    print("Número inválido")
