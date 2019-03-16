
import math
values = input("Input some comma seprated numbers : ")
lists = values.split(",")
print('List : ',lists)
n=len(lists)
b=0
listab=[]
for i in lists:
    i=float(i)
    b=i**2
    listab.append(b)
a=0
for j in listab:
    a=a+j
print('sum of squared numbers : ',a) 
print('number of elements entered :',n)
mean=a/n    
result= math.sqrt(mean)
print('RMS is : ',result)

