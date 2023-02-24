#copyright @SUJASHBANERJEE
numbers=(1,2,3,4,5,6,7,8,9)
ctr=0
ctr2=0
for i in numbers:
    if(i%2==0):
       ctr=ctr+1
# counting the even numbers
    else:
       ctr2=ctr2+1
# counting the odd numbers
print('Number of even numbers : ',ctr)
print('Number of odd numbers : ',ctr2 )