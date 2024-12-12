while True:
    op = str(input("Digite: \n'+' para somar \n'-' para subtrair \n'*' para multiplicar \n'/' para dividir \n's' para sair \nOpção: "))
    if op != "s":
        a = int(input("Digite o primeiro número: "))
        b = int(input("Digite o segundo número: "))
        if op == "+":
            print(f"A soma de {a} e {b} = {a+b}")
        elif op == "-":
            print(f"A subtração de {a} e {b} = {a-b}")
        elif op == "*":
            print(f"A multiplicação de {a} e {b} = {a*b}")
        elif op == "/":
            print(f"A divisão de {a} por {b} = {a/b}")
        else:
            print("Opção inválida!")
        print("---------------------------------------------")
    else:
        break
