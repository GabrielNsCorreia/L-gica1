a = float(input('Digite a medida do primeiro lado do triângulo: '))
b = float(input('Digite a medida do segundo lado do triângulo: '))
c = float(input('Digite a medida do terceiro lado do triângulo: '))
if a<b+c and b<a+c and c<a+b:
    if a == b and b == c:
        print('Os valores formam um triângulo equilátero')
    elif a == b or b == c or a == b:
        print('Os valores formam um triângulo isóceles')
    else:
        print('Os valores formam um triângulo escaleno')
else:
    print('Estes valos não formam um triângulo')
