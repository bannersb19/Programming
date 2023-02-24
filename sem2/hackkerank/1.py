#copyright@SUJASHBANERJEE
l= int(input("Enter the lower range: "))
r= int(input("Enter the upper range: "))
# accepting input from user
list=[]
# declaring blank list
for i in range(l,r):
   if(i%7==0 and i%5==0):
     list.append(str(i))
print(",".join(list))