t = float(input("Введіть невід'ємне число: "))


while t > 9:
    t -= 9
if t >= 0 and t <= 3:
    print("Зелений колір")
elif t > 3 and t <= 4:
    print("Жовтий колір")
elif t > 4 and t <= 6:
    print("Червоний колір")
elif t > 6 and t <= 9:
    print("Зелений колір")