n = int(input("Введіть число: "))
y = 0   # Початкове значення

for i in range(n,0,-1):    # Проміжок, на якому цикл буде повторюватись
    y = (y + 3*i)**0.5   # Функція   
print("Значення функції дорівнює:", y)