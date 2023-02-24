#copyright @SUJASHBANERJEE
s1 = ("GeeksforGeeks")
ctr = 0
v = set("aeiouAEIOU")
for i in s1:
    if i in v:
        ctr = ctr + 1
print("Output : No. of vowels :", ctr)