# This array stores the integer to be sum by row and column
arr=[[1, 2, 3, 4, 5],
    [2, 4, 6, 8, 10],
    [20, 10, 5, 3, 1],
    [3, 6, 9, 12, 15]]

for i in range(4):
    total=0
    for j in range(5):
        total+= arr[i][j]
    arr[i].append(total)


column_total=[]
for j in range(5):
    total=0
    for i in range (4):
        total=+arr[i][j]
    column_total.append(total)
    
arr.append(column_total)
print(arr)
