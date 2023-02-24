#copyright @SUJASHBANERJEE
n=int(input('Enter the nth term : '))
a=0
b=1
sum=0
while(sum<n):
   print(sum,end=' ')
   a=b
   b=sum
   sum=a+b