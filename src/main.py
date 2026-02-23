arr=[[85, 92, 78, 90],
    [76, 88, 95, 82],
    [91, 74, 83, 87]]

largest=arr[0][0]
index=0

for i in range(3):
    for j in range(4):
        if(arr[i][j]>largest):
            largest=arr[i][j]
            index=i

print(f" This is the largest number: {largest}\n")
print(f"This is the index of the student with the largest number: {index}")