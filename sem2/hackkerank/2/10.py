#copyright @SUJASH
def ispalindrome(s1):
   s2=s1[::-1]
   if(s1==s2):
      return 1
   else:
      return 0
def issymetry(s1):
   l=len(s1)
   if(l%2==0):
     mid=l//2
   else:
     mid=l//2 + 1
   s2=s1[0:mid]
   s3=s1[mid:l]
   
   if(s2==s3):
     return 1
   else:
     return 0
s1=input(("Enter a string : "))
palin=ispalindrome(s1)
symmetry=issymetry(s1)
if(symmetry==1):
    print('The entered string is symmetrical')
else:
    print('The entered string is not symmetrical')
if(palin==1):
    print('The entered string is palindrome')
else:
    print('The entered string is not palindrome')