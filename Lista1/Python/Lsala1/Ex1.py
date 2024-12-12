tempo = float(input('Digite o tempo (horas): '))
velocidade = float(input('Digite a velocidade (Km): '))
distancia = tempo * velocidade
litros = distancia / 12
print(f'A velocidade média é: {velocidade}, o tempo gasto da viagem é: {tempo}, a distância percorrida é {distancia}, e a quantidade de litros usados é {litros:.2f}')
