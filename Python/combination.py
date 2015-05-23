fact1=1
fact2=1
fact3=1
n=int(input("Enter the value of n: "))
r=int(input("Enter the value of r:  "))
p=n-r
for i in range (1, n+1):
    fact1=fact1*i

for j in range (1, r+1):
    fact2=fact2*j
    
for k in range (1, p+1):
    fact3=fact3*k
    
comb=fact1/(fact2*fact3)
print "The value of nCr is ", comb