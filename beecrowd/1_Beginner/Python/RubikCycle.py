Blue, Orange, Green, Red, White, Yellow, Temp = 'B', 'O', 'G', 'R', 'W', 'Y', 'T'
T = [Temp] * 3
R = [[Orange] * 3 for _ in range(3)]
L = [[Red] * 3 for _ in range(3)]
F = [[Blue] * 3 for _ in range(3)]
B = [[Green] * 3 for _ in range(3)]
U = [[White] * 3 for _ in range(3)]
D = [[Yellow] * 3 for _ in range(3)]
TempArr = [[Temp] * 3 for _ in range(3)]
TT = [[Temp] * 3 for _ in range(4)]


def flip2DArray(arr):
    for i in range(3):
        TempArr[0][i] = arr[2-i][0]
        TempArr[1][i] = arr[2-i][1]
        TempArr[2][i] = arr[2-i][2]
    for i in range(3):
        arr[0][i] = TempArr[0][i]
        arr[1][i] = TempArr[1][i]
        arr[2][i] = TempArr[2][i]

def R_flip():
    flip2DArray(R)
    for i in range(3):
        TT[0][i] = F[i][2]
        TT[1][i] = D[i][2]
        TT[2][i] = B[2-i][0]
        TT[3][i] = U[2-i][2]
    for i in range(3):
        U[i][2] = TT[0][i]
        F[i][2] = TT[1][i]
        D[i][2] = TT[2][i]
        B[i][0] = TT[3][i]

def r_flip():
    R_flip()
    R_flip()
    R_flip()

def L_flip():
    flip2DArray(L)
    for i in range(3):
        TT[0][i] = B[2-i][2]
        TT[1][i] = D[2-i][0]
        TT[2][i] = F[i][0]
        TT[3][i] = U[i][0]
    for i in range(3):
        U[i][0] = TT[0][i]
        B[i][2] = TT[1][i]
        D[i][0] = TT[2][i]
        F[i][0] = TT[3][i]

def l_flip():
    L_flip()
    L_flip()
    L_flip()


def U_flip():
    flip2DArray(U)
    TT = [[0 for _ in range(3)] for _ in range(4)]
    for i in range(3):
        TT[0][i] = R[0][i]
        TT[1][i] = B[0][i]
        TT[2][i] = L[0][i]
        TT[3][i] = F[0][i]
    for i in range(3):
        F[0][i] = TT[0][i]
        R[0][i] = TT[1][i]
        B[0][i] = TT[2][i]
        L[0][i] = TT[3][i]


def u_flip():
    U_flip()
    U_flip()
    U_flip()


def D_flip():
    flip2DArray(D)
    TT = [[0 for _ in range(3)] for _ in range(4)]
    for i in range(3):
        TT[0][i] = L[2][i]
        TT[1][i] = B[2][i]
        TT[2][i] = R[2][i]
        TT[3][i] = F[2][i]
    for i in range(3):
        F[2][i] = TT[0][i]
        L[2][i] = TT[1][i]
        B[2][i] = TT[2][i]
        R[2][i] = TT[3][i]


def d_flip():
    D_flip()
    D_flip()
    D_flip()


def F_flip():
    flip2DArray(F)
    TT = [[0 for _ in range(3)] for _ in range(4)]
    for i in range(3):
        TT[0][i] = L[2-i][2]
        TT[1][i] = D[0][i]
        TT[2][i] = R[2-i][0]
        TT[3][i] = U[2][i]
    for i in range(3):
        U[2][i] = TT[0][i]
        L[i][2] = TT[1][i]
        D[0][i] = TT[2][i]
        R[i][0] = TT[3][i]


def f_flip():
    F_flip()
    F_flip()
    F_flip()


def B_flip():
    flip2DArray(B)
    TT = [[0 for _ in range(3)] for _ in range(4)]
    for i in range(3):
        TT[0][i] = R[i][2]
        TT[1][i] = D[2][i]
        TT[2][i] = L[i][0]
        TT[3][i] = U[0][2-i]
    for i in range(3):
        U[0][i] = TT[0][i]
        R[2-i][2] = TT[1][i]
        D[2][i] = TT[2][i]
        L[i][0] = TT[3][i]


def b_flip():
    B_flip()
    B_flip()
    B_flip()





moves = []
while True:
    move = input()
    if move == "":
        break
    else:
        moves.append(move)

# print(moves)
for move in moves:

    count = 1
    match = False

    while not match:
        for seq in move:
            if seq == 'U':
                U_flip()
            elif seq == 'u':
                u_flip()

            elif seq == 'D':
                D_flip()
            elif seq == 'd':
                d_flip()

            elif seq == 'R':
                R_flip()
            elif seq == 'r':
                r_flip()

            elif seq == 'L':
                L_flip()
            elif seq == 'l':
                l_flip()

            elif seq == 'F':
                F_flip()
            elif seq == 'f':
                f_flip()

            elif seq == 'B':
                B_flip()
            elif seq == 'b':
                b_flip()


        stop = False
        for i in range(3):
            for j in range(3):
                if R[i][j] != 'O' or L[i][j] != 'R' or F[i][j] != 'B' or B[i][j] != 'G' or U[i][j] != 'W' or D[i][
                    j] != 'Y':
                    stop = True
                    count += 1
                if stop:
                    break
            if stop:
                break
        if not stop:
            match = True

    print(count)

    # for seq in move:
    #     print(seq)