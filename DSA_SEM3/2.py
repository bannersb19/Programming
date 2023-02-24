def binarySearch(array, x, low, high):
    while low <= high:
        mid = low + (high - low)//2
        if array[mid] == x:
            return mid
        elif array[mid] < x:
            low = mid + 1
        else:
            high = mid - 1
    return -1
a=[]
n=int(input("Enter the size of the array : "))
for i in range(0,n):
    element = int(input())
    a.append(element)
sch = int(input("Enter the element : "))
result = binarySearch(a,sch,0,n-1)
print("Found at index ",result)