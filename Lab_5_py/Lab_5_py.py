n = int(input("Введіть кількість простих чисел: "))

k = 1

while n != 0:
    k += 1
    prime = True
    for i in range(2,k//2+1):
         if k%i == 0:
            prime = False
    if prime == True:
        print(k,end=" | ")
        n -= 1
print()



      