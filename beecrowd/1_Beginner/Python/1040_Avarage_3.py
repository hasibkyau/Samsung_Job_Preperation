z=input()
N1,N2,N3,N4= z.split()

N1=float(N1)
N2=float(N2)
N3=float(N3)
N4=float(N4)

Media=0.00;

Media = (N1*2.0 + N2*3.0 + N3*4.0 + N4*1.0)/10;
format_float = "{:.1f}".format(Media)
print("Media: "+ str(format_float));

if Media >= 7.0:
    print("Aluno aprovado.");
elif Media <5.0:
    print("Aluno reprovado.");
elif Media >= 5.0 and Media <= 6.9:
    print("Aluno em exame.");

    N5 = float(input())
    format_float = "{:.1f}".format(N5)
    print("Nota do exame: "+ str(format_float));

    Media = (Media + N5) / 2;
    format_float = "{:.1f}".format(Media)

    print("Aluno aprovado.");
    print("Media final: "+str(format_float));


