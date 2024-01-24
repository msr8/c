a = [8, 1, 3, 11, 15, 7]
n = 3

[1,3,7,8,11,15]

a.sort()
print(a)
print('')


current_difference = float('inf')

for i in range(len(a)-n+1):
    min_elem = a[i]
    max_elem = a[i+n-1]
    diff     = max_elem - min_elem
    
    if current_difference > diff:
        current_difference = diff

print(current_difference)




