v1 = float(input('Entre com o valor 1: '))
v2 = float(input('Entre com o valor 2: '))
if v1 == v2:
    print('Os números digitados são iguais, então não há diferenças entre eles')
else:
    if v1 > v2:
        diferenca = v1 - v2
    else:
        diferenca = v2 - v1
    print(f'A diferença entre os números é {diferenca}')
    