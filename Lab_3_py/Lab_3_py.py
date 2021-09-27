import math
x = float(input("Введіть число: "))
term = x
Sum = term
n = 1
e = 10**(-8)
while S > 3:
    term = x*x/((2*n)*(2*n+1))*term
    n +=1
    Sum += term
print(Sum)