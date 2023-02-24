#copyright @SUJASHBANERJEE
s1=input()
bool=(any(chr.isdigit() for chr in s1))
bool1=(any(chr.islower() for chr in s1))
if(bool==True and bool1==True):
    print("True")
else:
    print("False")