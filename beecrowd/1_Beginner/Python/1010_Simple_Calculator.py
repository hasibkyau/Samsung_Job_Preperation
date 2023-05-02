P1 = input()
id_1, unit_1, price_1 = P1.split()

P2 = input()
id_2, unit_2, price_2 = P2.split()

id_1=int(id_1)
unit_1=int(unit_1)
price_1=float(price_1)

id_2=int(id_2)
unit_2=int(unit_2)
price_2=float(price_2)

Media = (unit_1*price_1) + (unit_2*price_2)
format_float = "{:.2f}".format(Media)
print("VALOR A PAGAR: R$ "+str(format_float))
