#Відсортували за таблицею ASCII
s = input("Введіть речення: ")
lst = s.split() 
length = len(lst)
for i in range(length-1):
    for j in range(length-i-1):
        if lst[j][:1] > lst[j+1][:1]:
            lst[j], lst[j+1] = lst[j+1], lst[j]
print(lst)