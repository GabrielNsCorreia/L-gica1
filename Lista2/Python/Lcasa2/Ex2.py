n = int(input("Digite um número entre 0 e 100: "))
chave = 37
if n > 0 and n < 100:
    if n <= chave:
        print(f"A distância do número {n} para 37 é igual a {chave - n}")
    else:
        print(f"A distância do número {n} para 37 é igual a {n - chave}")
else:
    print("Número inválido")
