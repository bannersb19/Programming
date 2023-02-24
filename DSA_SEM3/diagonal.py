#COPTRIGHT@SUJASH BANERJEE
#Write a Python program to find absolute difference between sum of left diagonal 
#elements and sum of the right diagonal elements. (Take user input for string values)
def difference(arr, n):
    d1 = 0
    d2 = 0

    for i in range(0, n):
        for j in range(0, n):
            if (i == j):
                d1 += arr[i][j]

            
            if (i == n - j - 1):
                d2 += arr[i][j]
        
    
    return abs(d1 - d2)
n = int(input("Enter no. of rows and columns: "))   
arr = []
print("Enter the value row-wise:")
for i in range(n):  
    a =[]
    for j in range(n):      
         a.append(int(input()))
    arr.append(a)

print("The difference between the sums of the diagonals is:", difference(arr, n))
