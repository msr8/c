L = []

n = int(input("Enter range of list:"))
for i in range (0,n):
    num = int(input("Enter elements of the list:")) 
    L.append(num)

print("The list is: ", L)

# To remove the first and the last element of the list
DELETE = []
x = L.pop(0)
DELETE.append(x)

y = L.pop()

DELETE.append(y)

print("The chopped list: ", L)
print("The chopped elements: ", DELETE)