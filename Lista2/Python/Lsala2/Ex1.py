n1 = float(input('Nota 1: '))
n2 = float(input('Nota 2: '))
n3 = float(input('Nota 3: '))
media = (n1 + n2 + n3)/3
if media >= 6:
    print(f'Aluno aprovado com média {media:.2f}')
else:
        print(f'Aluno reprovado com média {media:.2f}')
