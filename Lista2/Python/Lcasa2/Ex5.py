sb = float(input("Salário bruto do funcionário: R$"))
h = int(input("Número de horas de trabalho no mês: ")) 
if sb < 800:
    desconto = 0
elif 800 <= sb and sb <= 1600:
    desconto = sb * 0.08 + sb * 0.05
else:
    desconto = sb * 0.15 + sb * 0.07
if h > 160:
    adicional = ((h - 160) * (sb/160)) / 2
else:
    adicional = 0
print(f"O salário líquido do funcionário é igual a R${sb - desconto + adicional:.2f}")
