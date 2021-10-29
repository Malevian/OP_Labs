import math     # Бібліотека math
x = float(input("Введіть число: "))
term = x
Sum = term
n = 1
eps = 10**(-8)
while math.fabs(term) > eps:        
    term *= x*x/((2*n)*(2*n+1))     
    Sum += term
    n += 1
    print("Проміжне значення суми: ", Sum)
    print("Проміжне значення числа term:", term)
    print()
else:
    print("Значення суми дорівнює: ", Sum)  
