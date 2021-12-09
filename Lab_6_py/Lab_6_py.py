import math

triangles = int(input("Введіть кількість трикутників: "))
max_array = 0

def Surface(a, b, degree):
    degree = angle*math.pi/180
    return(a*b*math.sin(degree)/2)
def max_surface(max, current):
    if max < current:
        max = current
    return max
for i in range (0,triangles):
    side1 = float(input("Введіть першу сторону: "))
    side2 = float(input("Введіть другу сторону: "))
    angle = float(input("Введіть кут між ними (Від 0 до 180): "))
    array_tri = Surface(side1,side2,angle)
    print(array_tri)
    max_array = max_surface(max_array, array_tri)
print("Найбільша площа дорівнює ", max_array)
