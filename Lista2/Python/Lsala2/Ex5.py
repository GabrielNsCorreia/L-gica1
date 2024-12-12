a = int(input('Digite o primeiro número: '))
b = int(input('Digite o segundo número: '))
c = int(input('Digite o terceiro número: '))
if a<b and b<c:
    print(f'Os valores em ordem crescente são {a}, {b}, {c}')
elif a<c and c<b:
    print(f'Os valores em ordem crescente são {a}, {c}, {b}')
elif b<a and a<c:
    print(f'Os valores em ordem crescente são {b}, {a}, {c}')
elif b<c and c<a:
    print(f'Os valores em ordem crescente são {b}, {c}, {a}')
elif c<a and a<b:
    print(f'Os valores em ordem crescente são {c}, {a}, {b}')
elif c<b and b<a:
    print(f'Os valores em ordem crescente são {c}, {b}, {a}')
else:
    print('Os valores são iguais')
