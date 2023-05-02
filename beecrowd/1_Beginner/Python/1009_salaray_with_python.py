N = (input())
x = float(input())
y = float(input())

Media = x + (y*15)/100
format_float = "{:.2f}".format(Media)
print("TOTAL = R$ "+str(format_float))
