N = int(input())
X = []

for i in range(N):
    X.append(int(input()))


for i in range(N):
    if abs(X[i]) % 2 == 0:
            if X[i] > 0:
                print("EVEN POSITIVE")

            elif X[i] < 0:
                print("EVEN NEGATIVE");

            elif X[i] == 0:
                print("NULL");

    elif abs(X[i]) % 2 == 1:
            if X[i] > 0:
                print("ODD POSITIVE");

            elif X[i] < 0:
                print("ODD NEGATIVE");

            elif X[i] == 0:
                print("NULL");
