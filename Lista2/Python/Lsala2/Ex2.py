n1 = float(input('Nota 1: '))
n2 = float(input('Nota 2: '))
media = (n1 + n2)/2
if media >= 6:
    print(f'Aluno aprovado com média {media}')
else:
    ne = float(input('Nota de exame: '))
    novamedia = media + ne
    if novamedia >= 5:
        print(f'Aluno aprovado em exame com média {novamedia}')
    else:
        print(f'Aluno reprovado com média {novamedia}')
