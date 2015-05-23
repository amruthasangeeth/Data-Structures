num=int(input("Enter a number: "))
dup=num
sum1=0
while(num!=0):
    r=num%10
    sum1=(sum1*10)+r
    num=num/10
    
if(dup==sum1):
    print("%d is paliandrome" %dup)
    
else:
    print("%d is not paliandrome" %dup)