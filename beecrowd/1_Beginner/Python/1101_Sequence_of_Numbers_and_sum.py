i=int(0)
while(True):
    row = list(map(int, input().split()))
    x = int(row[0])
    y = int(row[1])
    # if i==0:
    #     print()
    #     i=1

    if x<=0 or y<=0:
        break
    else:
        if x>y:
            temp = x
            x = y
            y = temp

        sum= int(0)

        for j in range(x,y+1):
                sum += j
                print(str(j), end =" ")
        print("Sum=" + str(sum))
