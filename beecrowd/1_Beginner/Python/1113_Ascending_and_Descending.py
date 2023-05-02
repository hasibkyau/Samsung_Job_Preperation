while(True):
    row = list(map(int, input().split()))
    x = int(row[0])
    y = int(row[1])

    if x==y:
        break
    else:
        if x>y:
            print("Decrescente")
        elif x<y:
            print("Crescente")
