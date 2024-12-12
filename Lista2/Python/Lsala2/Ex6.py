import math
a = float(input('Digite o coeficiente A: '))
b = float(input('Digite o coeficiente B: '))
c = float(input('Digite o coeficiente C: '))
if a != 0:
    delta = b**2 - 4*a*c
    if delta < 0:
        print('A equação não tem solução')
    elif delta == 0:
        x1 = (-b) / (2 * a)
        x2 = x1
        print(f'A equação tem duas raizes iguais {x1:.5f} e {x2:.5f}')
    else:
        x1 = (-b + (math.sqrt(delta))) / (2 * a)
        x2 = (-b - (math.sqrt(delta))) / (2 * a)
        print(f'A equação tem dois valores diferentes {x1:.5f} e {x2:.5f}')
else:
    print('Não é uma equação de segundo grau')
