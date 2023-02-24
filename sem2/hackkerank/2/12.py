#copyright @SUJASHBANERJEE
s1=input()
s1=s1.split(' ')
s2=""
w,c=0,0
for w in s1:
    l=len(w)
    for c in range(l):
        if(c==0 or c==(l-1)):
            s2=s2+w[c].upper()
        else:
            s2=s2+w[c]
    s2=s2+" "
print(s2)