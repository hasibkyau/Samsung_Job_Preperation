n = int(input())  # read the first line as integer
lines = []  # create an empty list to store the linesay
output = []

for i in range(n):
    row = list(map(float, input().split()))  # read each row and convert to float
    lines.append(row)  # add the row to the linesay

for line in lines:
    avg = ((line[0]*2) + (line[1]*3) + (line[2]*5))/10;
    output.append(avg)

for out in output:
    format_float = "{:.1f}".format(out)
    print(format_float)