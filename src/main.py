from ctypes import sizeof


arr=[]

for i in range (3):
    arr.append(int(input("Please enter a Number: \n")))

    
largest= arr[0]

for i in range (3):
    if arr[i] > largest:
        largest= arr[i]
        
        
print(f"This is the largest number {largest}")