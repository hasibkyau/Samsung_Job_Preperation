z = input()
a,b,c = z.split()

a=int(a)
b=int(b)
c=int(c)


Media = (a + b + abs(a-b)) /2
Media = (Media + c + abs(Media-c)) /2

format_float = "{:.0f}".format(Media)
print(str(format_float)+" eh o maior")
